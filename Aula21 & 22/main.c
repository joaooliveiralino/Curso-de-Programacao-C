#include <stdio.h>
#include <stdlib.h>

//tipo double
//long para tipo double


int main()
{
    float x = 3.1415;

    long double y = 2.1415838483828483858293859;

    printf("Valor de y: %.10Lf\n", y);
    printf("Um long double precisa de %d bytes de memoria.\n", sizeof y);

    //8 bytes de memoria 8*8 = 64 bits

    return 0;
}
