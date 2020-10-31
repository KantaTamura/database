#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include "database_IO.h"

void import_config(long *personNum) {
    FILE *config;

    if ( (config = fopen("../Database/database.cfg", "r")) == NULL ) {
        fprintf(stderr, "Error: Couldn't open the file...%s...\n", "database.cfg");
        exit(-1);
    }

    fprintf(stdout, "Importing a config file...");

    char buf[32], *end_pointer;
    long num;

    if (fscanf(config, "%31[^\n]%*[^\n]", buf) == EOF) {
        fprintf(stderr, "Error: No input specified.\n");
        exit(-1);
    }
    fscanf(config, "%*c");

    num = strtol(buf, &end_pointer, 10);
    if (*end_pointer != '\0') {
        fprintf(stderr, "Error: Invalid character found: %c\n", *end_pointer);
        exit(-1);
    }
    if (errno == ERANGE) {
        fprintf(stderr, "Error: Out of range (%s)\n",
                num == LONG_MAX ? "Overflow" : "Underflow");
        exit(-1);
    }

    fprintf(stdout, "Done\n");

    fclose(config);

    *personNum = num;
}

void read_line(FILE *csv, char buf[8][64]) {
    if (
            fscanf(csv,
                   "%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^,],%63[^\n]",
                   buf[0], buf[1], buf[2], buf[3], buf[4], buf[5], buf[6], buf[7])
            == EOF
    ) {
        fprintf(stderr, "Error: No input specified.\n");
        exit(-1);
    }
}

void string_to_long(long *num, char *str) {
    char *end_pointer;

    *num = strtol(str, &end_pointer, 10);
    if (*end_pointer != '\0') {
        fprintf(stderr, "Error: Invalid character found: %c\n", *end_pointer);
        exit(-1);
    }
    if (errno == ERANGE) {
        fprintf(stderr, "Error: Out of range (%s)\n",
                *num == LONG_MAX ? "Overflow" : "Underflow");
        exit(-1);
    }
}

void parse_csv(Person person[], long personNum) {
    FILE *csv;

    if ( (csv = fopen("../Database/database.csv", "r")) == NULL ) {
        fprintf(stderr, "Error: Couldn't open the file...%s...\n", "database.csv");
        exit(-1);
    }

    fprintf(stdout, "Importing a CSV file...");

    char buf[8][64];

    for (long i = 0; i < personNum; i++) {
        read_line(csv, buf);
        fscanf(csv, "%*c");

        strcpy(person[i].name, buf[0]);
        strcpy(person[i].sNumber, buf[1]);
        string_to_long(&person[i].aNumber, buf[2]);
        strcpy(person[i].address, buf[3]);
        strcpy(person[i].gender, buf[4]);
        strcpy(person[i].class, buf[5]);
        string_to_long(&person[i].age, buf[6]);
        strcpy(person[i].birth, buf[7]);
    }

    fprintf(stdout, "Done\n");

    fclose(csv);
}
