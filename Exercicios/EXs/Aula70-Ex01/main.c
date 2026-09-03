#include <stdio.h>

int main() {
    int n;

    printf("Digite um valor entre 1 e 10: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
