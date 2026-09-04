#include <stdio.h>

int main() {
    int n;
    long a = 0;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        a += i;
    }

    printf("A = %ld\n", a);

    return 0;
}
