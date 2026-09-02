#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, kg, imc = 0;


    printf("\n========================");
    printf("\n\tCalculo IMC\n");
    printf("\n==========================\n");
    printf("Digite seu peso em KG:  \n");
    scanf("%f", &kg);
    printf("Digite sua altura em METROS: \n");
    scanf("%f", &altura);

    imc = kg / (altura * altura);

    if (imc < 18.5) {
        printf("Seu IMC é %.2f você está baixo do peso", imc);
    }
    else if (imc > 18.5 && imc <25) {
        printf("Seu IMC é  %.2f você está com o peso normal", imc);
    }
    else if (imc > 25 && imc < 30 ){
        printf("Seu IMC e %.2f voce esta com sobrepeso", imc);
    }
    else if (imc > 35 && imc < 40 ) {
        printf("Seu IMC e de %.2f obesidade grau 1", imc);
    }
    else if (imc > 40) {
    printf("Seu imc é de %.2f obesidade grau 2 ", imc);
    }

    return 0;
}
