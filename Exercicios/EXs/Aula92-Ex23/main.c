#include <stdio.h>

/* Restricoes:
   - "printf" utilizado no maximo 2 vezes (2 chamadas diferentes no codigo)
   - "\n" utilizado no maximo 2 vezes no codigo
*/

int main() {
    for (int linha = 1; linha <= 8; linha++) {
        for (int coluna = 1; coluna <= linha; coluna++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
