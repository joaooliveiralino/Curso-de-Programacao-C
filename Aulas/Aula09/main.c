#include <stdio.h>
#include <stdlib.h>

/*funcao fgetc();*/


int main()
{
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin);

    printf("Caracter lido: %c\n", letra);





    return 0;
}
