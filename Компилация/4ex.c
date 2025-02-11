#include <stdio.h>
#include <math.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    long arr[size];
    printf("Enter array: \n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        arr[i] = pow(arr[i], 4);
    }

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}