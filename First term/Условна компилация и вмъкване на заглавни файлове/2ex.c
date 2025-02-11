#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    #if defined ARRAY_SIZE && ARRAY_SIZE > 0 && ARRAY_SIZE < 11 
        int arr[ARRAY_SIZE];
        int c = 1;
        printf("Array: \n");
        for (int i = 0; i < ARRAY_SIZE; i++) {
            arr[i] = c;
            c *= 2;
            printf("%d\n", arr[i]);
        }
    #else
    printf("The array size isn't compatable with this program.");
    #endif

    return 0;
}