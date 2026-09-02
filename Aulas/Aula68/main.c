#include <stdio.h>
#include <stdlib.h>

//Estrutura de repetição DO - WHILE

int main()
{
    // texte while

    int valor, valor2;

    printf("Digite um valor maior que 0 : \n\n");
    scanf("%d", &valor);

    while (valor <= 0) {
        printf("Valor invalido! Digite um valor maior que zero :\n\n");
        scanf("%d", &valor);
    }

    printf("Valor lido: %d\n", valor);

    //teste do-while

    do {
    printf("Digite um valor maior que 0: \n");
    scanf("%d", &valor2);

    } while (valor2 <= 0);

    printf("Valor lido: %d", valor2);



    return 0;
}
