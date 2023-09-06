/*
Create a program to compare two strings and print the larger strings.

 * Get two string input from the user using fgets()

 * Compare the length of both the strings using strlen()

 * Print the larger string

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sana1[20];
    char sana2[20];

    printf("Anna kaksi sanaa: ");
    fgets(sana1, sizeof(sana1), stdin);
    fgets(sana2, sizeof(sana2), stdin);

    if (strlen(sana1) == strlen(sana2)) {
        printf("Sanat \"%s\" ja \"%s\" on yhta suuria",sana1, sana2);
    } else if (strlen(sana1) < strlen(sana2)) {
        printf("Sana2 \"%s\" on suuremi", sana2);
    } else {
        printf("Sana1 \"%s\" on suuremi", sana1);
    }

    return 0;
}
