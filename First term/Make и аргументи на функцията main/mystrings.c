#include "mystrings.h"

int strlength(char* s) {
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void strconcat(char* arr1, char* arr2) {
    int i = 0, j = 0;

    while (arr1[i] != '\0') {
        i++;
    }

    while (arr2[j] != '\0') {
        arr1[i] = arr2[j];
        i++;
        j++;
    }

    arr1[i] = '\0';
}

int strcompare(char *s1, char *s2) {
    while (*s1 != '\0' && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    
    if (*s1 < *s2) {
        return -1;
    }
    
    if (*s1 > *s2) {
        return 1;
    }
    
    return 0;
}
