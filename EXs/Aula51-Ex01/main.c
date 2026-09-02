#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c = 0;



    printf("Digite três valores inteiro!\n");
    scanf("%d%d%d", &a,&b,&c);


    if (a > b && a > c) {
    printf("Maior valor: %d\n",a );
    }
    else if (b > a && b > c){
    printf("Maior valor: %d\n", b);
    }
    else {
        printf("Maior valor: %d\n", c);
    }

    if (a < b && a < c) {
    printf("Menor valor: %d\n", a);
    }
    else if (b < a && b < c) {
    printf("Menor valor: %d\n", b);
    }
    else{
    printf("Menor valor: %d\n", c);
    }
    return 0;
}
