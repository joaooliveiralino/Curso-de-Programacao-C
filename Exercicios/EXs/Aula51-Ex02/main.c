#include <stdio.h>
#include <stdlib.h>

int main()
{
    int positivo, negativo = 0;
    int valores[5];



    for(int i = 1; i <=5 ; i++) {

    printf("Digite um valor inteiro: \n");
    scanf("%d", &valores[i]);

    }

    for (int j = 1; j <=5; j++){
    if (valores[j] < 0){
    negativo = negativo + 1;
    }
    else {
    positivo = positivo + 1;
    }
    }

    printf("Quantidade de numeros positivos: %d\n", positivo);
    printf("Quantidade de numeros negativos: %d\n", negativo);


    return 0;
}
