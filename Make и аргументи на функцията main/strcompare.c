#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("You can only enter 2 strings.\n");
    }
    else {
        printf("Result: %d\n", strcompare(argv[1], argv[2]));
    }

    return 0;
}
