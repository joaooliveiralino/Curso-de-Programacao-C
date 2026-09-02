#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 9;
    int b = 12;

    a = b - a;
    b = b - a;
    a = b + a;

    printf("A: %d\nB: %d", a,b);




    return 0;
}
