#include <stdio.h>
#include "quadraticroots.h"

int main() {
    double a, b, c;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);
    printf("Enter c: ");
    scanf("%lf", &c);

    struct QuadraticRootsResult result = findroots(a, b, c);

    if (result.norealroots == 0) {
        printf("x1 = %Lf\nx2 = %Lf\n", result.x1, result.x2);
    }
    else printf("No real roots.");

    return 0;
}
