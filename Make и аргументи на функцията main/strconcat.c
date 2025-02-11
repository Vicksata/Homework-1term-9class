#include <stdio.h>
#include "mystrings.h"
#include <strings.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("You can only enter 2 strings.\n");
    }
    else {
        char s[101];
        if (strlength(argv[1]) > 50 && strlength(argv[2]) > 50) {
            printf("Both strings' length should not exceed 50 symbols.\n");
            return 0;
        }

        strcpy(s, argv[1]);

        strconcat(s, argv[2]);
        printf("Result: %s\n", s);
    }

    return 0;
}
