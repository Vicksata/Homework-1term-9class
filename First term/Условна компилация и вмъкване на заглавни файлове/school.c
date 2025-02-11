#include <stdio.h>
#include <string.h>
#include "schoolclass.h"
#include "schoolroom.h"

struct School {
    struct SchoolClass school_classes[20];
    struct SchoolRoom school_rooms[10];
};

int main() {
    struct School school;

    strcpy(school.school_classes[0].students[0].first_name, "Petar");
    strcpy(school.school_classes[0].students[0].middle_name, "Petrov");
    strcpy(school.school_classes[0].students[0].last_name, "Ivanov");
    school.school_classes[0].students[0].birth_year = 2009;

    school.school_classes[0].class_letter = 'A';
    school.school_classes[0].class_number = 9;

    strcpy(school.school_classes[0].class_teacher.first_name, "Ivan");
    strcpy(school.school_classes[0].class_teacher.middle_name, "Ivanov");
    strcpy(school.school_classes[0].class_teacher.last_name, "Petrov");
    school.school_classes[0].class_teacher.birth_year = 1982;


    school.school_rooms[0].room_number = 9113;
    strcpy(school.school_rooms[0].people_in_room[0].first_name, "Georgi");
    strcpy(school.school_rooms[0].people_in_room[0].middle_name, "Georgiev");
    strcpy(school.school_rooms[0].people_in_room[0].last_name, "Georgiev");
    school.school_rooms[0].people_in_room[0].birth_year = 2009;

    return 0;
}