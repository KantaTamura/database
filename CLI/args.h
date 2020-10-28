#ifndef ARGS_H
#define ARGS_H

typedef enum Action {
    Show = 0,
    File = 1,
    Add  = 2,
    NullAction,
} Action;

typedef enum Args {
    Name,
    sNumber,
    aNumber,
    Address,
    Gender,
    Class,
    Age,
    Birth,
    Score,
    NullArgs,
} Args;

#endif //ARGS_H
