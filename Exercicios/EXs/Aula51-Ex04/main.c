#include <stdio.h>
#include <stdlib.h>

int main()
{

    float dolar, real = 0;
    int escolha = 0;


    printf("Qual operação deseja fazer? \n1 - Dolar pra real\n2 - Real para dolar");
    scanf("%d", &escolha);

    switch (escolha) {

    case 1: {
        printf("Digite quantos dolares voce quer conveter: \n");
        scanf("%f", &dolar);

        real = dolar * 5,30;

        printf("Quantia em real: %.2f\n", real);
        break;
    }
    case 2: {
        printf("Digite a quantidade de reais que voce quer converter: \n");
        scanf("%f", &real);

        dolar = real / 5,30;

        printf("Valor em dolar: %.2f", dolar);

    }

    }

    return 0;
}
