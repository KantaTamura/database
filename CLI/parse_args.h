#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include "args.h"
#include "../string/sds.h"

typedef struct Cli {
    Action action;
    Args args;
    sds path;
    int data_i32;
    sds data_sds;
} Cli;

#endif //PARSE_ARGS_H
