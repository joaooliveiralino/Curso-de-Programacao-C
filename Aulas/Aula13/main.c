#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ler dois caracteres

    char a, b;

    printf("DIGITE DUAS LETRAS: \n");
    scanf("%c %c", &a,&b);

    //espaco entre os %c e o comando para o computador desconsiderar o enter o tab e o espaco
    //buffer -> f\n

    printf("Primeira Letra: %c\nSegunda Letra: %c\n", a, b);

    return 0;
}
