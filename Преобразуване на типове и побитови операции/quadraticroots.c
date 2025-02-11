#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c) {
    struct QuadraticRootsResult result;

    if (a == 0.0) {
        if (b == 0.0) {
            result.norealroots = 1;
        } else {
            result.norealroots = 0;
            result.x1 = -c / b;
            result.x2 = result.x1;
        }
    } else {
        long double d = b * b - 4 * a * c;

        if (d < 0) {
            result.norealroots = 1;
        } else {
            result.norealroots = 0;
            result.x1 = (-b + sqrtl(d)) / (2 * a);
            result.x2 = (-b - sqrtl(d)) / (2 * a);
        }
    }
    
    return result;
}
