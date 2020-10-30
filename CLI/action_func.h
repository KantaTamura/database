#ifndef ACTION_FUNC_H
#define ACTION_FUNC_H

#include "parse_args.h"

// show (pseudo) class
void show_name   (Cli *cli);
void show_sNumber(Cli *cli);
void show_aNumber(Cli *cli);
void show_address(Cli *cli);
void show_gender (Cli *cli);
void show_class  (Cli *cli);
void show_age    (Cli *cli);
void show_birth  (Cli *cli);

// file (pseudo) class
void file_name   (Cli *cli);
void file_sNumber(Cli *cli);
void file_aNumber(Cli *cli);
void file_address(Cli *cli);
void file_gender (Cli *cli);
void file_class  (Cli *cli);
void file_age    (Cli *cli);
void file_birth  (Cli *cli);

// add (pseudo) class
void add_name   (Cli *cli);
void add_sNumber(Cli *cli);
void add_aNumber(Cli *cli);
void add_address(Cli *cli);
void add_gender (Cli *cli);
void add_class  (Cli *cli);
void add_age    (Cli *cli);
void add_birth  (Cli *cli);

#endif //ACTION_FUNC_H
