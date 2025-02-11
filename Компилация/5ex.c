#include <stdio.h>
#include "maths.h"

int main() {
    int x;
    printf("Enter number: ");
    scanf("%d", &x);

    printf("Factorial: %d", factorial(x));

    return 0;
}