#ifndef DATABASE_H
#define DATABASE_H

#include "personData.h"

typedef struct Person {
    char name[32];
    char sNumber[32];
    int aNumber;
    char address[32];
    PersonGender gender;
    char class[32];
    int age;
    PersonBirth birth;
} Person;

void person_get_name   (Person *person[], char *name[32]);
void person_get_sNumber(Person *person[], char *sNumber[32]);
void person_get_aNumber(Person *person[], int *aNumber);
void person_get_address(Person *person[], char *address[32]);
void person_get_gender (Person *person[], PersonGender *gender);
void person_get_class  (Person *person[], char *class[32]);
void person_get_age    (Person *person[], int *age);
void person_get_birth  (Person *person[], PersonBirth *birth);
void person_get_score  (Person *person[]);

#endif //DATABASE_H
