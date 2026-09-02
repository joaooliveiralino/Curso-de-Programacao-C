#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Como Limpar o Buffer do teclado com a funcao scanf()

    char a,b;

    printf("Digite uma letra: ");
    scanf("%c", &a);

    printf("Digite uma letra: ");
    scanf(" %c", &b);

    printf("Primeira Letra: %c\nSegunda Letra: %c\n", a, b);



    return 0;
}
