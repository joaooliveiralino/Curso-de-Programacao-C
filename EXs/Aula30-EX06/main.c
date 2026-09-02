    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    float dolar, real = 0;


    printf("Digite o valor em REAIS: R$\n");
    scanf("%f",&real);

    dolar = real / 5.30;

    printf("Valor em dolar: US%.2f", dolar);

    return 0;
}
