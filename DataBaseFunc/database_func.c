#include <string.h>
#include "database_func.h"

void person_get_name(Cli *cli, Person *person, char name[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(name[i], person[i].name);
    }
}

void person_get_sNumber(Cli *cli, Person *person, char sNumber[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(sNumber[i], person[i].sNumber);
    }
}

void person_get_aNumber(Cli *cli, Person *person, long aNumber[]) {
    for (int i = 0; i < cli -> personNum; i++) {
        aNumber[i] = person[i].aNumber;
    }
}

void person_get_address(Cli *cli, Person *person, char address[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(address[i], person[i].address);
    }
}

void person_get_gender(Cli *cli, Person *person, char gender[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(gender[i], person[i].gender);
    }
}

void person_get_class(Cli *cli, Person *person, char class[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(class[i], person[i].class);
    }
}

void person_get_age(Cli *cli, Person *person, long age[]) {
    for (int i = 0; i < cli -> personNum; i++) {
        age[i] = person[i].age;
    }
}

void person_get_birth(Cli *cli, Person *person, char birth[][64]) {
    for (int i = 0; i < cli -> personNum; i++) {
        strcpy(birth[i], person[i].birth);
    }
}
