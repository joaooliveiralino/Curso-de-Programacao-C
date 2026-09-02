#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*Ler sexo, idade, peso e altura e limpando buffer sdo teclado*/


    char sexo;
    int idade;
    float peso, altura;

    printf("Digite idade, peso, altura e sexo: \n");
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    /*Buffer do teclado -> idade, peso, altura na sequencia um caracter que reprenseta o sexo*/

    printf("Idade: %d\nPeso: %.1f\nAltura: %.2f\nSexo: %c\n",  idade, peso, altura, sexo);




    return 0;
}
