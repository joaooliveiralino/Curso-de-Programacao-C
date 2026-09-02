#include <stdio.h>
#include <stdlib.h>

//Verdadeiro ou falso na linguagem C

int main()
{
    int a = 0;

    printf("\n\tDigite um valor : ");
    scanf("%d", &a);


    printf("\nResultdo logico: %d\n", a < 0);




    if (a < 0) {
        printf("\n\tEsse valor é negativo!");
    }
    else {
    printf("\n\tEsse valor e positivo ou igual a zero");
    }


    return 0;
    }
