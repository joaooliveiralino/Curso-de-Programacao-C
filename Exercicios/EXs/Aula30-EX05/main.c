#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int resul2;
    float resul;
    float min;

    resul = 3672 / 60;
    resul2 = resul;

    min = resul - resul2;

    printf("%d\n", resul2);
    printf("%f\n", resul);
    printf("%f", min);

    return 0;
}
