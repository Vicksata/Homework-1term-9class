#include <stdio.h>

#define DEBUG

void sort_sum(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    #ifdef DEBUG
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    #endif

    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 3 == 0 && i != 0) {
            sum += arr[i];
        }
    }

    printf("Sum: %d", sum);
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

    sort_sum(arr, size);

    return 0;
}