#include <stdio.h>

int main() {
    int qtdFuncionarios;
    float salario, soma = 0, maior = 0, menor = 0;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &qtdFuncionarios);

    for (int i = 1; i <= qtdFuncionarios; i++) {
        printf("Digite o salario do funcionario %d: ", i);
        scanf("%f", &salario);

        soma += salario;

        if (i == 1 || salario > maior) {
            maior = salario;
        }
        if (i == 1 || salario < menor) {
            menor = salario;
        }
    }

    printf("\nMedia salarial: %.2f\n", soma / qtdFuncionarios);
    printf("Salario mais alto: %.2f\n", maior);
    printf("Salario mais baixo: %.2f\n", menor);

    return 0;
}
