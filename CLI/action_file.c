#include <stdio.h>
#include <stdlib.h>
#include "action_func.h"

FILE *make_output_file() {
    FILE *output;

    if ( (output = fopen("../Database/output.csv", "w")) == NULL ) {
        fprintf(stderr, "Error: Couldn't open the file...%s...\n", "output.csv");
        exit(-1);
    }

    return output;
}

void file_name(Cli *cli, Person *person) {
    char name[cli -> personNum][64];

    person_get_name(cli, person, name);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", name[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_sNumber(Cli *cli, Person *person) {
    char sNumber[cli -> personNum][64];

    person_get_sNumber(cli, person, sNumber);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", sNumber[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_aNumber(Cli *cli, Person *person) {
    long aNumber[cli -> personNum];

    person_get_aNumber(cli, person, aNumber);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%ld\n", aNumber[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_address(Cli *cli, Person *person) {
    char address[cli -> personNum][64];

    person_get_address(cli, person, address);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", address[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_gender(Cli *cli, Person *person) {
    char gender[cli -> personNum][64];

    person_get_gender(cli, person, gender);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", gender[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_class(Cli *cli, Person *person) {
    char class[cli -> personNum][64];

    person_get_class(cli, person, class);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", class[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_age(Cli *cli, Person *person) {
    long age[cli -> personNum];

    person_get_age(cli, person, age);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%ld\n", age[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_birth(Cli *cli, Person *person) {
    char birth[cli -> personNum][64];

    person_get_birth(cli, person, birth);

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s\n", birth[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}

void file_all(Cli *cli, Person *person) {
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

    FILE *output = make_output_file();

    for (int i = 0; i < cli -> personNum; i++) {
        fprintf(output, "%s,%s,%ld,%s,%s,%s,%ld,%s\n",
                name[i], sNumber[i], aNumber[i], address[i], gender[i], class[i], age[i], birth[i]);
    }

    fprintf(stdout, "...Done\n");

    fclose(output);
}
