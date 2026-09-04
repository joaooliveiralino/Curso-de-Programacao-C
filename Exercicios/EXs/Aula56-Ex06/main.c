#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    printf("Digite um valor para ser atruibuido a um mês do ano: \n");
    scanf("%d", &num);

    switch(num) {
    case 1: {
    printf("Janeiro");
    break;
    }
    case 2: {
    printf("Fevereiro");
    break;
    }
    case 3: {
    printf("Março");
    break;
    }
    case 4: {
    printf("Abril");
    break;
    }
    case 5:{
    printf("Maio");
    break;
    }
    case 6: {
    printf("JUnho");
    break;
    }
    case 7: {
    printf("JUlho");
    break;
    }
    case 8: {
    printf("Agosto");
    break;
    }
    case 9: {
    printf("Setembro");
    break;
    }
    case 10: {
    printf("Outubro");
    break;
    }
    case 11: {
    printf("Novembro");
    break;
    }
    case 12: {
    printf("Dezembro");
    break;
    }
    default: {
    printf("Valor invalido!!");
    break;
    }
}

    return 0;
}
