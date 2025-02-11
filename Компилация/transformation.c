#include "transformation.h"
#include <string.h> 

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

struct transformation string_to_long_int(char input[100]) {
    struct transformation result;
    result.result = 0;
    result.error[0] = '\0';

    if (strlen(input) == 0) {
        strcpy(result.error, "Invalid input string!");
        return result;
    }

    int i = 0;
    int is_negative = 0;

    if (input[0] == '-') {
        is_negative = 1;
        i++;
    }

    while (input[i] != '\0') {
        if (!is_digit(input[i])) {
            strcpy(result.error, "Invalid input string");
            return result;
        }

        result.result = result.result * 10 + (input[i] - '0');
        i++;
    }

    if (is_negative) {
        result.result = -result.result;
    }

    return result;
}
