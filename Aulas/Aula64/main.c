#include <stdio.h>
#include <stdlib.h>

//Estrutura de Reptição FOR
//O FOR tem uma contidço de inicio/ uma condição de parada e um incremento

int main()
{

    int i = 0;


    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d ", i++ );
    printf("%d\n\n", i++ );

    for (i = 0; i <=10; i++) {
        printf("%d " , i);
    }

    return 0;
}
