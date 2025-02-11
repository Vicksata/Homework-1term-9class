#ifndef SCHOOLCLASS_H
#define SCHOOLCLASS_H

#include "person.h"

struct SchoolClass {
    Person students[26];
    char class_letter;
    int class_number;
    Person class_teacher;
};

#endif
