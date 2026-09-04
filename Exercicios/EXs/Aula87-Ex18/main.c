#include <stdio.h>

int main() {
    int x;
    int idade, maiorIdade = 0, menorIdade = 0;
    char sexo;
    float salario, somaSalarios = 0;
    int mulheresAte2000 = 0;

    printf("Digite a quantidade de pessoas pesquisadas: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        printf("\nPessoa %d\n", i);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Salario: ");
        scanf("%f", &salario);

        somaSalarios += salario;

        if (i == 1 || idade > maiorIdade) {
            maiorIdade = idade;
        }
        if (i == 1 || idade < menorIdade) {
            menorIdade = idade;
        }

        if ((sexo == 'F' || sexo == 'f') && salario <= 2000.0) {
            mulheresAte2000++;
        }
    }

    printf("\nMedia de salario do grupo: %.2f\n", somaSalarios / x);
    printf("Maior idade: %d\n", maiorIdade);
    printf("Menor idade: %d\n", menorIdade);
    printf("Mulheres com salario ate R$2000,00: %d\n", mulheresAte2000);

    return 0;
}
