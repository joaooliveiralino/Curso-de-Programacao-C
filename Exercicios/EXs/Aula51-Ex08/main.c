#include <stdio.h>
#include <stdlib.h>

int main()
{
char escolha;
float peso1,peso2,peso3,pesototal, valor1, valor2, valor3, resultado,mediap = 0;


printf("Qual media deseja calcular? \n");
printf("Digite 'a' para media artimtica\nDigite 'p' para media ponderada\n");
scanf("%c", &escolha);



if (escolha == 'a'){
    printf("Digite o valor 1, 2 e em seguida o valor 3: ");
    scanf("%f%f%f", &valor1, &valor2, &valor3);

    resultado = (valor1 + valor2 + valor3) / 3;
    printf("Resultado: %.2f", resultado);
}
else{
    printf("Digite o valor 1, 2 e em seguida o valor 3: \n");
    scanf("%f%f%f", &valor1, &valor2, &valor3);
    printf("Agora, digite o peso 1, 2 e em seguida o peso 3: \n");
    scanf("\%f%f%f", &peso1, &peso2, &peso3);

    pesototal = peso1 + peso2 + peso3;
    resultado = (valor1 * peso1) + (valor2 * peso2) + (valor3 * peso3);
    mediap = resultado/pesototal;

    printf("Resultado da media ponderada: %.2f\n", mediap);

}




    return 0;
}
