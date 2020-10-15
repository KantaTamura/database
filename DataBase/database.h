#ifndef DATABASE_H
#define DATABASE_H

#include "personData.h"

typedef struct Person {
    char name[32];
    Gender gender;
    Birth birth;
    int age;
    char address[32];
    char contact[32];
} Person;

typedef struct Student {
    Person person;
    char sNumber[32];
    char class[32];
    int aNumber;
} Student;

typedef struct Teacher {
    Person person;
    char class[32];
} Teacher;

typedef struct School {
    Student student[128];
    Teacher teacher[64];
    char name[32];
    char address[32];
} School;

void
void Person_add(Person person);

#endif //DATABASE_H
