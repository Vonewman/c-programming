#include <stdio.h>
#include <stdlib.h>

//computes a*x^2 + b * x + c
double quadratic (double a, double b, double c, double x) {
    double total;
    total += a * x * x;
    total += b * x;
    total += c;
    return total;
}

int main (void) {
    double y1 = quadratic(1, -2, 0.5, 3);
    double y2 = quadratic(-1, 3, 1, 2);
    printf(" 1*(3^2) -2*3 + 0.5 = %f\n", y1);
    printf("-1*(2^2) +3*2 + 1 = %f\n", y2);
    return EXIT_SUCCESS;
}
