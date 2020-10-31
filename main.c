#include <stdio.h>
#include <stdlib.h>
#include "CLI/parse_args.h"
#include "CLI/action_func.h"
#include "CLI/action_func_support.h"
#include "DataBaseFunc/database.h"

void processing(Cli *cli, Person *person);

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

    // 現在保存されている人の数
    long personNum;  import_config(&personNum);
    cli.personNum = personNum;

    // personNum人分のデータを用意
    Person person[cli.personNum];

    // database.csvからデータを読み取る
    parse_csv(person, cli.personNum);

    // 動作分岐
    switch (cli.action) {
        case Show:
            // 指定された要素を出力する
            fprintf(stdout, "Outputs the specified element...");
            processing(&cli, person);
            break;
        case File:
            // 指定された要素をファイルとして出力する
            fprintf(stdout, "Outputs the specified element to a file...");
            processing(&cli, person);
            break;
        case Add:
            // dataの値をcsvに追加する
            fprintf(stdout, "Add the specified element...\n");
            add_csv(&cli);
            break;
        case NullAction:
            // 第1コマンドライン引数に不明な文字列が入った場合
            fprintf(stderr, "The first command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            return -1;
    }
    return 0;
}

void processing(Cli *cli, Person *person) {
    switch (cli -> args) {
        case Name:
            // 名前について処理する
            fprintf(stdout, "personal name...\n");
            name_processing[cli -> action](cli, person);
            break;
        case sNumber:
            // 学籍番号について処理する
            fprintf(stdout, "student number...\n");
            sNumber_processing[cli -> action](cli, person);
            break;
        case aNumber:
            // 出席番号について処理する
            fprintf(stdout, "attendance number...\n");
            aNumber_processing[cli -> action](cli, person);
            break;
        case Address:
            // 住所について処理する
            fprintf(stdout, "street address...\n");
            address_processing[cli -> action](cli, person);
            break;
        case Gender:
            // 性別について処理する
            fprintf(stdout, "gender...\n");
            gender_processing[cli -> action](cli, person);
            break;
        case Class:
            // クラスについて処理する
            fprintf(stdout, "class...\n");
            class_processing[cli -> action](cli, person);
            break;
        case Age:
            // 年齢について処理する
            fprintf(stdout, "age...\n");
            age_processing[cli -> action](cli, person);
            break;
        case Birth:
            // 生年月日について処理する
            fprintf(stdout, "birthday...\n");
            birth_processing[cli -> action](cli, person);
            break;
        case All:
            // すべて処理する
            fprintf(stdout, "all...\n");
            all_processing[cli -> action](cli, person);
            break;
        case NullArgs:
            // 第2コマンドライン引数に不明な文字列が入った場合
            fprintf(stdout, "ERROR...\n");
            fprintf(stderr, "The second command line variable is incorrect, please enter the correct command.\n"
                             "For proper command line arguments, use help.\n");
            exit(-1);
    }
}
