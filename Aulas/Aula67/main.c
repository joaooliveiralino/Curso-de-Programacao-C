#include <stdio.h>
#include <stdlib.h>

//Estrutura de repetição WHILE

int main()
{

    int valor;

    printf("Digite um valor maior que 0 : \n\n");
    scanf("%d", &valor);

    while (valor <= 0) {
        printf("Valor invalido! Digite um valor maior que zero :\n\n");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n", valor);

    return 0;
}
