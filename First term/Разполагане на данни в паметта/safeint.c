#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int a, int b) {
    struct SafeResult result;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        result.errorflag = 1;
        result.value = 0;
    }
    else {
        result.value = a + b;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safesubtract(int a, int b) {
    struct SafeResult result;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)) {
        result.errorflag = 1;
        result.value = 0;
    }
    else {
        result.value = a - b;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safemultiply(int a, int b) {
    struct SafeResult result;
    if (a == 0 || b == 0) {
        result.value = 0;
        result.errorflag = 0;
    }
    else if ((a < 0 && b < 0) && a * b > INT_MAX) {
        result.errorflag = 1;
        result.value = 0;
    }
    else if ((a < 0 || b < 0) && a * b < INT_MIN) {
        result.errorflag = 1;
        result.value = 0;
    }
    else if (a > 0 && b > 0 && (a > INT_MAX / b || a < INT_MIN / b)) {
        result.errorflag = 1;
        result.value = 0;
    }
    else {
        result.value = a * b;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safedivide(int a, int b) {
    struct SafeResult result;
    if (b == 0) {
        result.errorflag = 1;
        result.value = 0;
    }
    else {
        result.value = a / b;
        result.errorflag = 0;
    }
    return result;
}

struct SafeResult safestrtoint(char *str) {
    struct SafeResult result;
    result.value = 0;
    result.errorflag = 0;
    
    int i = 0, sign = 1;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            result.errorflag = 1;
            result.value = 0;
            return result;
        }

        struct SafeResult mul_result = safemultiply(result.value, 10);
        if (mul_result.errorflag == 1) {
            result.errorflag = 1;
            result.value = 0;
            return result;
        }
        
        struct SafeResult add_result = safeadd(mul_result.value, str[i] - '0');
        if (add_result.errorflag == 1) {
            result.errorflag = 1;
            result.value = 0;
            return result;
        }

        result.value = add_result.value;
    }

    result.value *= sign;

    return result;
}
