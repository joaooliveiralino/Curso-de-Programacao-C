#include <stdio.h>
#include <stdlib.h>

int main()
{

    float despesa, gorjeta, pessoas, porcento, total = 0;


    printf("Digite o valor de despesa: \n");
    scanf("%f", &despesa);
    printf("Digite o valor da porcentagem gorjeta: \n");
    scanf ("%f", &gorjeta);
    printf("Digite quantas pessoas vão dividir a conts: \n");
    scanf ("%f", &pessoas);

    porcento = gorjeta / 100;
    gorjeta = porcento * despesa;

    total = (despesa + gorjeta) / pessoas;

    printf("Valor a pagar da gorjeta: %.2f R$\n", gorjeta);
    printf("Valor que cada um deve pegar: %.2f", total);





    return 0;
}
