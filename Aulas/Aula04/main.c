#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, valor2;

    valor = 50;

    printf("Digite um valor inteiro ");
    scanf("%d", &valor);
    printf("Digite um segundo valor ");
    scanf("%d", &valor2);

    printf("\n\nPrimeiro Valor: %d\nSegundo valor: %d\n", valor,valor2);

    return 0;
}
