#ifndef ARGS_H
#define ARGS_H

typedef enum Action {
    Show = 0,
    File = 1,
    Add  = 2,
    NullAction,
} Action;

typedef enum Args {
    Name    = 0,
    sNumber = 1,
    aNumber = 2,
    Address = 3,
    Gender  = 4,
    Class   = 5,
    Age     = 6,
    Birth   = 7,
    All     = 8,
    NullArgs,
} Args;

#endif //ARGS_H
