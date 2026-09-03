#include <stdio.h>

int main() {
    float massaInicial, massa;
    int tempo = 0;

    printf("Digite a massa inicial (em gramas): ");
    scanf("%f", &massaInicial);

    massa = massaInicial;

    while (massa >= 0.05) {
        massa /= 2;
        tempo += 50;
    }

    printf("Tempo necessario: %d segundos\n", tempo);

    return 0;
}
