#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c = 0;

    printf("Digite três valores: \n");
    scanf("%d%d%d", &a, &b, &c);


    if (a > b && a > c)
    printf("Maior numero: %d", a);
    else if (b > a && b > c)
    printf("Maior numero: %d", b);
    else if (c > a && c > b)
    printf("Maior numero: %d", c);
    return 0;
}
