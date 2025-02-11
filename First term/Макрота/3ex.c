#include <stdio.h>

#define DEBUG(A) printf("Variable: %s\n", #A); \
printf("Value: %d\n", (A)); \
printf("File: %s\n", __FILE__); \
printf("Line: %d", __LINE__);

int main() {
    int x = 15;
    DEBUG(x);

    return 0;
}