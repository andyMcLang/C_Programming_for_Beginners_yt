#include <stdio.h>

int main() {
    char nimi[20];

    printf("Anna koko nimesi: ");
    fgets(nimi, sizeof(nimi), stdin);

    printf("Nimesi on %s", nimi);
    nimi[0] = 'X';
    printf("\nMutta se muuttuikin: %s", nimi);

    return 0;
}
