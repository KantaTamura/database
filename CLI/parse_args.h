#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include "args.h"

typedef struct Cli {
    Action action;
    Args args;
    char data[256];
    long personNum;
} Cli;

Cli initCli();
void parse_all_arguments(Cli *cli, int argc, char *argv[]);

Action parse_action_arguments(int argc, char *argv[]);
Args   parse_args_arguments  (int argc, char *argv[]);
void   parse_data_arguments  (int argc, char *argv[], char data[256]);

#endif //PARSE_ARGS_H
