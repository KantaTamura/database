#ifndef DATABASE_FUNC_H
#define DATABASE_FUNC_H

#include "personData.h"

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

void person_get_name   (Person *person[], char *name[32]);
void person_get_sNumber(Person *person[], char *sNumber[32]);
void person_get_aNumber(Person *person[], long *aNumber);
void person_get_address(Person *person[], char *address[64]);
void person_get_gender (Person *person[], char *gender[64]);
void person_get_class  (Person *person[], char *class[32]);
void person_get_age    (Person *person[], long *age);
void person_get_birth  (Person *person[], char *birth[32]);

#endif //DATABASE_FUNC_H
