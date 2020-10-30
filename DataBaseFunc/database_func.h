#ifndef DATABASE_FUNC_H
#define DATABASE_FUNC_H

#include "personData.h"

typedef struct Person {
    char name[32];
    char sNumber[32];
    int aNumber;
    char address[64];
    PersonGender gender;
    char class[32];
    int age;
    char birth[32];
} Person;

void person_get_name   (Person *person[], char *name[32]);
void person_get_sNumber(Person *person[], char *sNumber[32]);
void person_get_aNumber(Person *person[], int *aNumber);
void person_get_address(Person *person[], char *address[64]);
void person_get_gender (Person *person[], PersonGender *gender);
void person_get_class  (Person *person[], char *class[32]);
void person_get_age    (Person *person[], int *age);
void person_get_birth  (Person *person[], char *birth[32]);

#endif //DATABASE_FUNC_H
