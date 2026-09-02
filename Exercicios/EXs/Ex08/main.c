#include <stdio.h>
#include <stdlib.h>


void quadrado(int lad) {
    int escolha = 0;
    int lados = 0;

    printf("Como deseja fazer seu quadrado? \n");
    printf("1 - *\n2 - #\n3 - $");
    scanf("%d", &escolha);





    switch(escolha) {

    case 1:     {
        for (int i = 0 ; i < lad; i++){
            for (int j = 0; j < lad; j++) {
                printf("*");
            }
            printf("\n");
        }
        break;
        }
    case 2: {

        for (int i = 0 ; i < lad; i++){
            for (int j = 0; j < lad; j++) {
                printf("#");
            }
            printf("\n");
        }
        break;
    case 3:

        for (int i = 0 ; i < lad; i++){
            for (int j = 0; j < lad; j++) {
                printf("$");
            }
            printf("\n");
        }
        break;


    }
    }


}

int main()
{
    int lados = 0;

    printf("Quandos lados voce deseja em seu quadrado?\n");
    scanf("%d", &lados);

    quadrado(lados);






    return 0;
}
