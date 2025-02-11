#include "maths.h"

long factorial(int x) {
    long fact = 1;
    for (int i = 1; i < x; i++) {
        fact *= i;
    }

    return fact;
}