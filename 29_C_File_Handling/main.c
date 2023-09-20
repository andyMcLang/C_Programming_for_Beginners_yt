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

int main() {
    FILE *fptr;

    fptr = fopen("NewFile.txt", "w");
    if (fptr == NULL) {
        printf("File Open Unsuccessfully!");
        return 1;
    }

    fputs("C is a fun programming language.\n", fptr);
    fputs("And, I love using C language.\n", fptr);

    fclose(fptr);

    fptr = fopen("NewFile.txt", "r");
    if (fptr == NULL) {
        printf("File Open Unsuccessfully!");
        return 1;
    }

    char content[1000];

    while (fgets(content, 1000, fptr)) {
        printf("%s", content);
    }

    fclose(fptr);

    return 0;
}
