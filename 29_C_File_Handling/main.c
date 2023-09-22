/*
 * Create a new file in write mode

 * Write Content

    * C is a fun programming language.

    * And, I live using C language

  * Close the file

  * Again open the file in read mode and read
    the content of the file
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    fptr = fopen("program.txt", "w");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    fprintf(fptr, "C is a fun programming language.\n");
    fprintf(fptr, "And, I love using C language.\n");
    fclose(fptr);

    fptr = fopen("program.txt", "r");
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }

    char ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);


    return 0;
}
