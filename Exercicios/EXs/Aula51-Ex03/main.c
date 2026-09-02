#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valor = 0;

    printf("Digite um valor :\n");
    scanf("%d", &valor);

    if (valor % 2 == 0 || valor % 3 == 0 || valor % 5 == 0) {
    printf("Esse valor e divisivel por 2, 3 ou por 5!!");
    }
    else
    printf("Não e divisivel por 2, 3 ou 5");


    return 0;
}
