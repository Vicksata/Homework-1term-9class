#include <stdio.h>

#define SWAP(A, B, TYPE) \
        TYPE temp = (A); \
        A = (B); \
        B = (temp);

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for (int i = 0; i < SIZE; i++) \
        for (int j = 0; j < SIZE - i - 1; j++) \
            if (ARRAY[j] COMPARE ARRAY[j+1]) { \
                SWAP(ARRAY[j], ARRAY[j+1], TYPE); \
            }

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    SORT(arr, size, int, >);
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    SORT(arr, size, int, <);
    printf("Sorted array in descending order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}