#ifndef PARSE_ARGS_H
#define PARSE_ARGS_H

#include "args.h"
#include "../string/sds.h"

typedef struct Cli {
    Action action;
    Args args;
} Cli;

void show_data(Action action, Args args);

#endif //PARSE_ARGS_H
