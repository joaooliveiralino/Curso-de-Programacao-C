#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite dois valores: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                printf("Digite dois valores: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                printf("Digite dois valores: ");
                scanf("%f %f", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                printf("Digite o dividendo: ");
                scanf("%f", &num1);
                do {
                    printf("Digite o divisor (diferente de zero): ");
                    scanf("%f", &num2);
                    if (num2 == 0) {
                        printf("O divisor nao pode ser zero!\n");
                    }
                } while (num2 == 0);
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
