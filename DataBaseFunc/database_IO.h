#ifndef DATABASE_IO_H
#define DATABASE_IO_H

#include "database_func.h"

void import_config(long *personNum);
void read_line(FILE *csv, char buf[8][64]);
void parse_csv(Person person[], long personNum);

#endif //DATABASE_IO_H
