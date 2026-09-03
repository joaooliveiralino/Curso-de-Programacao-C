#include <stdio.h>

/* Restricoes:
   - "printf" utilizado no maximo 2 vezes (2 chamadas diferentes no codigo)
   - "\n" utilizado no maximo 1 vez no codigo
*/

int main() {
    for (int linha = 1; linha <= 10; linha++) {
        for (int coluna = 1; coluna <= 20; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
