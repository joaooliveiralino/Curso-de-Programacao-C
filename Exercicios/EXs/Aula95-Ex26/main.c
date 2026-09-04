#include <stdio.h>

int main() {
    float nota1, nota2, media;
    int opcao;

    do {
        do {
            printf("Digite a primeira nota (0 a 10): ");
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota invalida!\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        do {
            printf("Digite a segunda nota (0 a 10): ");
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota invalida!\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        media = (nota1 + nota2) / 2;
        printf("Media semestral: %.2f\n", media);

        printf("novo calculo? (1-sim 2-nao): ");
        scanf("%d", &opcao);

    } while (opcao == 1);

    return 0;
}
