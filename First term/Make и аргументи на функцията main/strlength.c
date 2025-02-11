#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("You can only enter 1 string.\n");
    }
    else {
        printf("Length of '%s': %d\n", argv[1], strlength(argv[1]));
    }

    return 0;
}
