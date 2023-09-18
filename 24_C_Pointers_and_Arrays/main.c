// #24 C Pointers and Arrays

/*
    Create a program to find the largest element of
    an array using pointers.

    int arr[] = {34, 12, 21, 54, 48};

    * Assign the first element of the array to a
      largest variable using pointer
      int largest = *arr

    * Run a for loop to access each element of the
      array.

    * Compare largest with each array element
      using pointer
      largest < *(arr +i)

    * If the largest variable is smaller than a
      element, assign the array value to largest

      largest = *(arr + i)
  */

#include <stdio.h>

int main() {
    int arr[] = {34, 12, 21, 54, 48};

    int largest = *arr;
    int smallest = *arr;

    for (int i = 0;i < 5; i++) {
        printf("%d ", *(arr+i));
        if (largest < *(arr+i)) {
            largest = *(arr+i);
        }

        if (smallest > *(arr+i)) {
            smallest = *(arr+i);
        }
    }

    printf("\nLargest number is %d", largest);
    printf("\nSmallest number is %d", smallest);

    return 0;
}
