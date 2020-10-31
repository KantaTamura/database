#ifndef ACTION_FUNC_H
#define ACTION_FUNC_H

#include "parse_args.h"
#include "../DataBaseFunc/database_func.h"

FILE *file_method();

// show (pseudo) class
void show_name   (Cli *cli, Person *person);
void show_sNumber(Cli *cli, Person *person);
void show_aNumber(Cli *cli, Person *person);
void show_address(Cli *cli, Person *person);
void show_gender (Cli *cli, Person *person);
void show_class  (Cli *cli, Person *person);
void show_age    (Cli *cli, Person *person);
void show_birth  (Cli *cli, Person *person);
void show_all    (Cli *cli, Person *person);

// file (pseudo) class
void file_name   (Cli *cli, Person *person);
void file_sNumber(Cli *cli, Person *person);
void file_aNumber(Cli *cli, Person *person);
void file_address(Cli *cli, Person *person);
void file_gender (Cli *cli, Person *person);
void file_class  (Cli *cli, Person *person);
void file_age    (Cli *cli, Person *person);
void file_birth  (Cli *cli, Person *person);
void file_all    (Cli *cli, Person *person);


// add (pseudo) class
void add_name   (Cli *cli, Person *person);
void add_sNumber(Cli *cli, Person *person);
void add_aNumber(Cli *cli, Person *person);
void add_address(Cli *cli, Person *person);
void add_gender (Cli *cli, Person *person);
void add_class  (Cli *cli, Person *person);
void add_age    (Cli *cli, Person *person);
void add_birth  (Cli *cli, Person *person);
void add_all    (Cli *cli, Person *person);

#endif //ACTION_FUNC_H
