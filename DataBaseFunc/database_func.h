#ifndef DATABASE_FUNC_H
#define DATABASE_FUNC_H

#include "personData.h"
#include "../CLI/parse_args.h"

typedef struct Person {
    char name[64];
    char sNumber[64];
    long aNumber;
    char address[64];
    char gender[64];
    char class[64];
    long age;
    char birth[64];
} Person;

void person_get_name   (Cli *cli, Person *person, char name[][64]);
void person_get_sNumber(Cli *cli, Person *person, char sNumber[][64]);
void person_get_aNumber(Cli *cli, Person *person, long aNumber[]);
void person_get_address(Cli *cli, Person *person, char address[][64]);
void person_get_gender (Cli *cli, Person *person, char gender[][64]);
void person_get_class  (Cli *cli, Person *person, char class[][64]);
void person_get_age    (Cli *cli, Person *person, long age[]);
void person_get_birth  (Cli *cli, Person *person, char birth[][64]);

#endif //DATABASE_FUNC_H
