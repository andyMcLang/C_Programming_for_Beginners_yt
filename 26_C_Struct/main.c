/*
 Create a program to find the differences
 between three complex numbers.

 * Perform the subtraction between
   complex numbers by subtracting the
   real part of one complex number from
   other complex numbers and same for
   the imaginary part too.
 */

#include <stdio.h>

typedef struct Complex {
    double real;
    double imagine;

} complex;

int main() {
    complex complex1 = {
            .real = 65.99,
            .imagine = 45.67,
    };

    complex complex2 = {
            .real = 21.21,
            .imagine = 42.56,
    };

    complex complex3 = {
            .real = 4.45,
            .imagine = 1.88,
    };

    complex sum;

    sum.real = complex1.real - complex2.real - complex3.real;
    sum.imagine = complex1.imagine - complex2.imagine - complex3.imagine;

    printf("Sum of subtraction real is %.2lf\n", sum.real);
    printf("Sum of subtraction imagine is %.2lfi\n", sum.imagine);

    return 0;
}
