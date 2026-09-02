#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero = 3.1415;

    printf("O valor da variavel e igual a: %.2f\n", numero);

    printf("Digite um numero real: \n");
    scanf("%f", &numero);
    printf("Valor lido %.3f\n", numero);

    return 0;
}
