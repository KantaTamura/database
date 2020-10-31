#include <stdio.h>
#include "action_func.h"

void show_name(Cli *cli, Person *person) {
    char name[cli -> personNum][64];

    person_get_name(cli, person, name);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", name[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_sNumber(Cli *cli, Person *person) {
    char sNumber[cli -> personNum][64];

    person_get_sNumber(cli, person, sNumber);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", sNumber[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_aNumber(Cli *cli, Person *person) {
    long aNumber[cli -> personNum];

    person_get_aNumber(cli, person, aNumber);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%ld\n", aNumber[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_address(Cli *cli, Person *person) {
    char address[cli -> personNum][64];

    person_get_address(cli, person, address);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", address[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_gender(Cli *cli, Person *person) {
    char gender[cli -> personNum][64];

    person_get_gender(cli, person, gender);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", gender[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_class(Cli *cli, Person *person) {
    char class[cli -> personNum][64];

    person_get_class(cli, person, class);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", class[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_age(Cli *cli, Person *person) {
    long age[cli -> personNum];

    person_get_age(cli, person, age);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%ld\n", age[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_birth(Cli *cli, Person *person) {
    char birth[cli -> personNum][64];

    person_get_birth(cli, person, birth);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%s\n", birth[i]);
    }

    fprintf(stdout, "...Done\n");
}

void show_all(Cli *cli, Person *person) {
    char name   [cli -> personNum][64];
    char sNumber[cli -> personNum][64];
    long aNumber[cli -> personNum];
    char address[cli -> personNum][64];
    char gender [cli -> personNum][64];
    char class  [cli -> personNum][64];
    long age    [cli -> personNum];
    char birth  [cli -> personNum][64];

    person_get_name   (cli, person, name);
    person_get_sNumber(cli, person, sNumber);
    person_get_aNumber(cli, person, aNumber);
    person_get_address(cli, person, address);
    person_get_gender (cli, person, gender);
    person_get_class  (cli, person, class);
    person_get_age    (cli, person, age);
    person_get_birth  (cli, person, birth);

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(stdout, "%12s, %10s, %4ld, %25s, %4s, %4s, %4ld, %12s\n",
                name[i], sNumber[i], aNumber[i], address[i], gender[i], class[i], age[i], birth[i]);
    }

    fprintf(stdout, "...Done\n");
}
