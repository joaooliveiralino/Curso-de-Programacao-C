#include <stdio.h>

int main() {
    int n;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ao quadrado = %d\n", i, i * i);
    }

    return 0;
}
