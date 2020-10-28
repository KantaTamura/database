#include <stdio.h>
#include <stdlib.h>
#include "CLI/parse_args.h"
#include "CLI/action_func.h"
#include "CLI/action_func_support.h"

void processing(Cli *cli);

int main(int argc, char* argv[]) {
    // コマンドライン引数が存在しないか、5個以上ある場合
    if (argc == 1 || argc >= 5) {
        fprintf(stderr, "Incorrect command line arguments.\n"
                         "For proper command line arguments, use help.\n");
        return -1;
    }

    // コマンドライン引数格納
    Cli cli = initCli();
    parse_all_arguments(&cli, argc, argv);

    // 動作分岐
    switch (cli.action) {
        case Show:
            // 指定された要素を出力する
            fprintf(stdout, "Outputs the specified element...");
            processing(&cli);
            break;
        case File:
            // 指定された要素をファイルとして出力する
            fprintf(stdout, "Outputs the specified element to a file...");
            processing(&cli);
            break;
        case Add:
            // 指定された要素にdataの値を追加する
            fprintf(stdout, "Add the specified element...");
            processing(&cli);
            break;
        case NullAction:
            // 第1コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The first command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            return -1;
    }

    return 0;
}

void processing(Cli *cli) {
    switch (cli -> args) {
        case Name:
            fprintf(stdout, "Name...\n");
            name_processing[cli -> action](cli);
            break;
        case sNumber:
            fprintf(stdout, "sNumber...\n");
            sNumber_processing[cli -> action](cli);
            break;
        case aNumber:
            fprintf(stdout, "aNumber...\n");
            aNumber_processing[cli -> action](cli);
            break;
        case Address:
            fprintf(stdout, "Address...\n");
            address_processing[cli -> action](cli);
            break;
        case Gender:
            fprintf(stdout, "Gender...\n");
            gender_processing[cli -> action](cli);
            break;
        case Class:
            fprintf(stdout, "Class...\n");
            class_processing[cli -> action](cli);
            break;
        case Age:
            fprintf(stdout, "Age...\n");
            age_processing[cli -> action](cli);
            break;
        case Birth:
            fprintf(stdout, "Birth...\n");
            birth_processing[cli -> action](cli);
            break;
        case Score:
            fprintf(stdout, "Score...\n");
            score_processing[cli -> action](cli);
            break;
        case NullArgs:
            // 第2コマンドライン引数に不明な文字列が入った場合
            fprintf(stdout, "ERROR...\n");
            fprintf(stderr, "The second command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            exit(-1);
    }
}
