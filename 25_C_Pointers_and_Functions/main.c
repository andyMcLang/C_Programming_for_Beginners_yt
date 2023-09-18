/*
 Create a program to find the multiplication of
 two numbers using a function and pointers.

 * Create a function that accepts three
   pointers.

 * Inside the function multiply values of two
   pointers and assign the result to the address
   of the third pointer.

 * Inside the main function, create three
   variables, two variables with values 13 and 9
   and the third variable to store their product.

 * Call the function with addresses of the 3
   variables as arguments.

 * Store the returned value inside a pointer and
   print the value pointed by the returned
   address.
 */

#include <stdio.h>

int* kertolaskuin(const int* num1, const int* num2, int* sum) {
    *sum = *num1 * *num2;

    return sum;
}

int main() {
    int numero1 = 13;
    int numero2 = 9;
    int summa;

    int* tulos = kertolaskuin(&numero1, &numero2, &summa);

    printf("%d kertaa %d on %d", numero1, numero2, *tulos);

    return 0;
}
