// #18 C Recursion
#include <stdio.h>

int luonnollinen_numero(int n);
int kerroin_luku(int n);

int main() {
    int numero;
    printf("Anna positiivinen numero: ");
    scanf("%d", &numero);
    while (numero <= 0) {
        printf("Et antanut positiivista numeroa, anna uudestaan: ");
        scanf("%d", &numero);
    }

    int tulosL = luonnollinen_numero(numero);
    printf("Antamasi numeron %d luonnollinen luku on %d\n", numero, tulosL);

    int tulosK = kerroin_luku(numero);
    printf("Antamasi numeron %d luonnollinen luku on %d\n", numero, tulosK);

    return 0;
}

int luonnollinen_numero(int n) {
    if (n != 0) {
        return n + luonnollinen_numero(n - 1);
    } else {
        return n;
    }
}


int kerroin_luku(int n) {
    if (n != 0) {
        return n * luonnollinen_numero(n - 1);
    } else {
        return n;
    }
}