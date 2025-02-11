#include <stdio.h>
#include <math.h>

#define POWER(A, B) pow(((A) + (B)), 2)

int main() {
    double x, y;
    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf", &y);

    printf("%lf", POWER(x, y));

    return 0;
}