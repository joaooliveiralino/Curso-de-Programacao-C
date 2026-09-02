#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0;
    char sexo;

    printf("Digite sua ideda e em seguida seu sexo f ou m\n");
    scanf("%d%c", &idade,&sexo);

    if(sexo == 'm' && idade == 18) {
        printf("Alistamneto obrigaório");
    }
    else {
    printf("Dispensado");
    }

    return 0;
}
