#include <string.h>
#include "parse_args.h"

Cli initCli() {
    Cli cli;

    cli.action = NullAction;
    cli.args   = NullArgs;
    strcpy(cli.data, "\0");

    return cli;
}

void parse_all_arguments(Cli *cli, int argc, char *argv[]) {
    cli -> action = parse_action_arguments(argc, argv);
    cli -> args   = parse_args_arguments  (argc, argv);
    parse_data_arguments  (argc, argv, cli -> data);
}

Action parse_action_arguments(int argc, char *argv[]) {
    Action action = NullAction;

    if (argc <= 1) return action;

    char *cmp = argv[1];
    char *actionData[3] = {"Show", "File", "Add"};

    for (int i = 0; i < 3; i++) {
        if ( strcmp(cmp, actionData[i]) == 0 ) {
            switch (i) {
                case 0:
                    action = Show;
                    break;
                case 1:
                    action = File;
                    break;
                case 2:
                    action = Add;
                    break;
                default:
                    //! DEAD CODE
                    break;
            }
        }
    }

    return action;
}

Args parse_args_arguments(int argc, char* argv[]) {
    Args args = NullArgs;

    if (argc <= 2) return args;

    char *cmp = argv[2];
    char *argsData[9] = {"Name", "sNumber", "aNumber", "Address", "Gender", "Class", "Age", "Birth", "All"};

    for (int i = 0; i < 9; i++) {
        if ( strcmp(cmp, argsData[i]) == 0 ) {
            switch (i) {
                case 0:
                    args = Name;
                    break;
                case 1:
                    args = sNumber;
                    break;
                case 2:
                    args = aNumber;
                    break;
                case 3:
                    args = Address;
                    break;
                case 4:
                    args = Gender;
                    break;
                case 5:
                    args = Class;
                    break;
                case 6:
                    args = Age;
                    break;
                case 7:
                    args = Birth;
                    break;
                case 8:
                    args = All;
                    break;
                default:
                    //! DEAD CODE
                    break;
            }
        }
    }

    return args;
}

void parse_data_arguments(int argc, char *argv[], char data[256]) {
    strcpy(data, "\0");

    if (argc <= 3) return;

    strcpy(data, argv[3]);
}
