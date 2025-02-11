#include <stdio.h>
#include "safeint.h"
#include "util.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        print_error();
        return 0;
    }

    struct SafeResult number1 = safestrtoint(argv[1]);
    struct SafeResult number2 = safestrtoint(argv[2]);

    if (number1.errorflag != 0 || number2.errorflag != 0) {
        print_error();
        return 0;
    }

    struct SafeResult result = safeadd(number1.value, number2.value);

    if (result.errorflag == 1) {
        print_error();
    } else {
        printf("Result: %d\n", result.value);
    }

    return 0;
}
