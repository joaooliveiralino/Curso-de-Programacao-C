#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaria = 45;
    float  dias, porcento, total = 0;

    printf("\n\tDigite quantos dias foram trabalhados: \n");
    scanf("%f", &dias);

    total = diaria * dias;

    porcento = 0.08 * total;

    total = total - porcento;

    printf("\n\tValor do imposto: 8%\n");
    printf("\n\tValor total receber: %.2f", total);






    return 0;
}
