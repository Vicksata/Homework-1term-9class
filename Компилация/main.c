#include <stdio.h>
#include "transformation.h"

int main() {
    char inputs[5][100] = {"123", "-456", "12ab34", "", "9999999999999999999999999"};

    for (int i = 0; i < 5; i++) {
        struct transformation result = string_to_long_int(inputs[i]);
        if (result.error[0] != '\0') {
            printf("Input: \"%s\" => Error: %s\n", inputs[i], result.error);
        } else {
            printf("Input: \"%s\" => Result: %ld\n", inputs[i], result.result);
        }
    }

    return 0;
}
