#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "action_func.h"

FILE *update_csv_file() {
    FILE *csv;

    if ( (csv = fopen("../Database/database.csv", "a")) == NULL ) {
        fprintf(stderr, "Error: ファイルを開くことができませんでした...%s...\n", "database.csv");
        exit(-1);
    }

    return csv;
}

FILE *update_config_file() {
    FILE *config;

    if ( (config = fopen("../Database/database.cfg", "w")) == NULL ) {
        fprintf(stderr, "Error: ファイルを開くことができませんでした...%s...\n", "database.cfg");
        exit(-1);
    }

    return config;
}

void add_csv(Cli *cli) {
    if (cli -> args != All) {
        fprintf(stderr, "Error: Addの場合、2番目の引数としてAllを指定してください.\n");
        exit(-1);
    }

    char _buf[8][64];

    sscanf(cli -> data, "%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^\0]",
           _buf[0], _buf[1], _buf[2], _buf[3], _buf[4], _buf[5], _buf[6], _buf[7]);

    for (int i = 0; i < 8; i++) {
        if ( strcmp(_buf[i], "\0") == 0 ) {
            fprintf(stderr, "Error: 入力形式が正しくありません.\n");
            exit(-1);
        }
    }

    FILE *csv    = update_csv_file();
    fprintf(csv, "%s\n", cli -> data);
    fclose(csv);

    FILE *config = update_config_file();
    fprintf(config, "%ld", cli -> personNum + 1);
    fclose(config);

    fprintf(stdout, "...完了\n");
}
