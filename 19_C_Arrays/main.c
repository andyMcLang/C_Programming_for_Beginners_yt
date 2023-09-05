#include <stdio.h>

int main() {
    int taulukko[5];
    int numeroSumma = 0;
    int kayttajanAntamaNumero;
    int taulukonKoko = 0;

    for (int i = 0; i < 5; i++) {
        printf("Anna numero: ");
        scanf("%d", &kayttajanAntamaNumero);
        while (kayttajanAntamaNumero < 0) {
            printf("Numero ei voi olla negatiivinen! Anna uus numero: ");
            scanf("%d", &kayttajanAntamaNumero);
        }
        taulukko[i] = kayttajanAntamaNumero;
        numeroSumma += kayttajanAntamaNumero;
        taulukonKoko++;
    }

    printf("Antamasi numerot: ");
    for (int i = 0; i < taulukonKoko; i++) {
        printf("%d ",taulukko[i]);
    }

    printf("\nNumeroitten summa on: %d\n", numeroSumma);
    printf("Numeroitten keskiarvo on: %.2lf\n", (double)numeroSumma/taulukonKoko);

    return 0;
}
