#include <stdio.h>

#define SWAP(A, B, TYPE) \
        TYPE temp = (A); \
        A = (B); \
        B = (temp);

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int y;
    printf("Enter y: ");
    scanf("%d", &y);

    SWAP(x, y, int);
    printf("x = %d, y = %d", x, y);
    return 0;
}