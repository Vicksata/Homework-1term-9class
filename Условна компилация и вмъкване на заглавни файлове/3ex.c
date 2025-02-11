#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        int t = arr[min];
        arr[min] = arr[i];
        arr[i] = t;
    }
}

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int k = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}

void reverse_array(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int t = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = t;
    }
}

void sort(int arr[], int n) {
    #ifdef _WIN32
        bubble_sort(arr, n);
    #elif __linux__
        selection_sort(arr, n);
    #elif __APPLE__
        insertion_sort(arr, n);
    #else
        reverse_array(arr, n);
    #endif
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

    sort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}