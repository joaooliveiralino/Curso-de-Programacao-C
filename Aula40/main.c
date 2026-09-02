#include <stdio.h>
#include <stdlib.h>

//decisão completa

int main()
{
    int a = 0;

    printf("\n\tDigite um valor : ");
    scanf("%d", &a);

    if (a < 0) {
        printf("\n\tEsse valor é negativo!");
    }
    else {
    printf("\n\tEsse valor e positivo ou igual a zero");
    }


    return 0;
}
