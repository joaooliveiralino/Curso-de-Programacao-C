#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b, armz = 0;


    printf("\n\tDigite um valor para A: \n");
    scanf("%d", &a);
    printf("\n\tDigite um valor para B: \n");
    scanf("%d", &b);

    armz = a;
    a = b;
    b = armz;

    printf("\n\tValor de A: %d\n\tValor de B: %d", a,b);



    return 0;
}
