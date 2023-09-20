/*
 Create a program that dynamically changes the
 size of an array.

 * Create a pointer array like this
    int* ages;

 * Alocate 4 spaces for the array using the
   malloc() function

 * Get 4 input values for the array.

 * Print the array elements using the pointer.

 * Resize the array to store 6 elements using
   realloc()

 * Assign 32 and 59 as the 5th and 6th elements.
   ages[4] = 32;
   ages[5] = 59;

 * Then finally Print all 6 array elements.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ages; // Declare a pointer to an integer array.
    int initialSize = 4; // Initial size of the array.
    int newSize = 6; // New size of the array.

    // Allocate memory for the initial array.
    ages = (int *) malloc(initialSize * sizeof(int));

    if (ages == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code.
    }

    // Get 4 input values for the initial array.
    printf("Enter %d integer values:\n", initialSize);
    for (int i = 0; i < initialSize; i++) {
        scanf("%d", &ages[i]);
    }

    // Print the initial array elements using the pointer.
    printf("Array elements:\n");
    for (int i = 0; i < initialSize; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");

    // Resize the array to store 6 elements using realloc.
    ages = (int *) realloc(ages, newSize * sizeof(int));

    if (ages == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with an error code.
    }

    // Assign values to the 5th and 6th elements.
    ages[4] = 32;
    ages[5] = 59;

    // Print all 6 array elements.
    printf("Array elements after resizing:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", ages[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory.
    free(ages);

    return 0; // Exit successfully.
}
