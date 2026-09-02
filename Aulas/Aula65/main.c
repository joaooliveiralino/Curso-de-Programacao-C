#include <stdio.h>
#include <stdlib.h>

//FOR DECRECENTE

int main()
{
    int i = 10;

    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d \n\n", i--);

    for (i = 10; i >= 0; i--) {
        printf("%d ", i);
    }




    return 0;
}
