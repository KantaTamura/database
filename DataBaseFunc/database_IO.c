#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include "database_IO.h"

void import_config(long *personNum) {
    FILE *config;

    if ( (config = fopen("../Database/database.cfg", "r")) == NULL ) {
        fprintf(stderr, "Error: Couldn't open the file...%s...\n", "database.cfg");
        exit(-1);
    }

    char buf[32], *end_pointer;
    long num;

    if (fscanf(config, "%31[^\n]%*[^\n]", buf) != 1) {
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

    fclose(config);

    *personNum = num;
}

void parse_csv(Person person[]) {
    FILE *csv;

    if ( (csv = fopen("../Database/database.csv", "r")) == NULL ) {
        fprintf(stderr, "Error: Couldn't open the file...%s...\n", "database.csv");
        exit(-1);
    }


}
