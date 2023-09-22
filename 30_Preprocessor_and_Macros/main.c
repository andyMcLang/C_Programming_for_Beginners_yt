/*
 Create a program that to find the square root
 of a number using the sqrt() function and
 macro together.

 * Include the math.h header file.

 * Define a macro function squareRoot(n).

 * Inside the main function, use the
    squareRoot(n) macro to compute the
    square root
*/

#include <stdio.h>
#include <math.h>

#define squareRoot(n) sqrt(n)

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    double result = squareRoot(n);

    printf("The square root of %d is %.2lf\n", n, result);

    return 0;
}
