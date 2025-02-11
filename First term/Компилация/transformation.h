#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

struct transformation {
    long int result;
    char error[100];
};

struct transformation string_to_long_int(char string[]);

#endif