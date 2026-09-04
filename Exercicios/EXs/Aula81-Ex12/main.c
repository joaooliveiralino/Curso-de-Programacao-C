#include <stdio.h>

int main() {
    const int TOTAL_ALUNOS = 45;
    float idade, altura;
    float somaIdadeBaixos = 0, somaAlturaMaiores = 0;
    int contBaixos = 0, contMaiores = 0;

    for (int i = 1; i <= TOTAL_ALUNOS; i++) {
        printf("\nAluno %d\n", i);
        printf("Digite a idade: ");
        scanf("%f", &idade);
        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        if (altura < 1.70) {
            somaIdadeBaixos += idade;
            contBaixos++;
        }

        if (idade > 20) {
            somaAlturaMaiores += altura;
            contMaiores++;
        }
    }

    if (contBaixos > 0) {
        printf("\nIdade media dos alunos com menos de 1,70m: %.2f\n", somaIdadeBaixos / contBaixos);
    } else {
        printf("\nNenhum aluno com menos de 1,70m.\n");
    }

    if (contMaiores > 0) {
        printf("Altura media dos alunos com mais de 20 anos: %.2f\n", somaAlturaMaiores / contMaiores);
    } else {
        printf("Nenhum aluno com mais de 20 anos.\n");
    }

    return 0;
}
