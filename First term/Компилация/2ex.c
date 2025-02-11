#include <stdio.h>

int NOK(int x, int y) {
    for (int i = x; i <= x * y; i+=x) {
        if (i % y == 0) return i;
    }
    return 0;
}

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    printf("NOK of x and y: %d", NOK(x, y));

    return 0;
}