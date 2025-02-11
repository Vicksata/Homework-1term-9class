#include <stdio.h>

#define MAX(A, B) ((A) > (B) ? (A) : (B))

int main() {
    int a;
    printf("Enter first number: ");
    scanf("%d", &a);
    int b;
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Bigger number is: %d", MAX(a, b));
    
    return 0;
}