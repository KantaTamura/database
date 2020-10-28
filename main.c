#include <stdio.h>
#include <stdlib.h>
#include "CLI/parse_args.h"
#include "CLI/action_func.h"
#include "CLI/action_func_support.h"

// TODO:関数ポインタの配列を用いた重複の削除 => https://qiita.com/sunadandy/items/e484e1161144bf76e2ad
void processing(Cli *cli, Action action);
void caseShow(Cli *cli);
void caseFile(Cli *cli);
void caseAdd (Cli *cli);

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
            caseShow(&cli);
            break;
        case File:
            // 指定された要素をファイルとして出力する
            fprintf(stdout, "Outputs the specified element to a file...");
            caseFile(&cli);
            break;
        case Add:
            // 指定された要素にdataの値を追加する
            fprintf(stdout, "Add the specified element...");
            caseAdd(&cli);
            break;
        case NullAction:
            // 第1コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The first command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            return -1;
    }

    return 0;
}

void caseShow(Cli *cli) {
    switch (cli -> args) {
        case Name:
            fprintf(stdout, "Name...\n");
            name_processing[0](cli);
            break;
        case sNumber:
            fprintf(stdout, "sNumber...\n");
            sNumber_processing[0](cli);
            break;
        case aNumber:
            fprintf(stdout, "aNumber...\n");
            aNumber_processing[0](cli);
            break;
        case Address:
            fprintf(stdout, "Address...\n");
            address_processing[0](cli);
            break;
        case Gender:
            fprintf(stdout, "Gender...\n");
            gender_processing[0](cli);
            break;
        case Class:
            fprintf(stdout, "Class...\n");
            class_processing[0](cli);
            break;
        case Age:
            fprintf(stdout, "Age...\n");
            age_processing[0](cli);
            break;
        case Birth:
            fprintf(stdout, "Birth...\n");
            birth_processing[0](cli);
            break;
        case Score:
            fprintf(stdout, "Score...\n");
            score_processing[0](cli);
            break;
        case NullArgs:
            // 第2コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The second command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            exit(-1);
    }
}

void caseFile(Cli *cli) {
    switch (cli -> args) {
        case Name:
            fprintf(stdout, "Name...\n");
            file_name(cli);
            break;
        case sNumber:
            fprintf(stdout, "sNumber...\n");
            file_sNumber(cli);
            break;
        case aNumber:
            fprintf(stdout, "aNumber...\n");
            file_aNumber(cli);
            break;
        case Address:
            fprintf(stdout, "Address...\n");
            file_address(cli);
            break;
        case Gender:
            fprintf(stdout, "Gender...\n");
            file_gender(cli);
            break;
        case Class:
            fprintf(stdout, "Class...\n");
            file_class(cli);
            break;
        case Age:
            fprintf(stdout, "Age...\n");
            file_age(cli);
            break;
        case Birth:
            fprintf(stdout, "Birth...\n");
            file_birth(cli);
            break;
        case Score:
            fprintf(stdout, "Score...\n");
            file_score(cli);
            break;
        case NullArgs:
            // 第2コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The second command line variable is incorrect, please enter the correct command.\n"
                            "For proper command line arguments, use help.\n");
            exit(-1);
    }
}

void caseAdd(Cli *cli) {
    switch (cli -> args) {
        case Name:
            fprintf(stdout, "Name...\n");
            add_name(cli);
            break;
        case sNumber:
            fprintf(stdout, "sNumber...\n");
            add_sNumber(cli);
            break;
        case aNumber:
            fprintf(stdout, "aNumber...\n");
            add_aNumber(cli);
            break;
        case Address:
            fprintf(stdout, "Address...\n");
            add_address(cli);
            break;
        case Gender:
            fprintf(stdout, "Gender...\n");
            add_gender(cli);
            break;
        case Class:
            fprintf(stdout, "Class...\n");
            add_class(cli);
            break;
        case Age:
            fprintf(stdout, "Age...\n");
            add_age(cli);
            break;
        case Birth:
            fprintf(stdout, "Birth...\n");
            add_birth(cli);
            break;
        case Score:
            fprintf(stdout, "Score...\n");
            add_score(cli);
            break;
        case NullArgs:
            // 第2コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The second command line variable is incorrect, please enter the correct command.\n"
                            "For proper command line arguments, use help.\n");
            exit(-1);
    }
}
