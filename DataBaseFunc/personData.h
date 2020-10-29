#ifndef PERSON_DATA_H
#define PERSON_DATA_H

typedef enum PersonGender {
    Male,
    Female,
} PersonGender;

typedef struct PersonBirth {
    int year;
    int month;
    int day;
} PersonBirth;


#endif //PERSON_DATA_H
