#include <stdio.h>

int main() {

    int taulukko[5];
    int summa = 0;
    int taulukonKoko = 0;

    printf("anna viisi numeroa: ");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &taulukko[i]);
        while (taulukko[i] < 0) {
            printf("Luku on negatiivinen, anna positiivinen: ");
            scanf("%d", &taulukko[i]);
        }
        summa += taulukko[i];
        taulukonKoko++;
    }

    printf("\nTaulukon numerot: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ",taulukko[i]);
    }

    printf("\nTaulukon numeroiden summa: %d", summa);
    printf("\nTaulukon numeroitten keskiarvo: %.2f", (double)summa/taulukonKoko);

    return 0;
}
