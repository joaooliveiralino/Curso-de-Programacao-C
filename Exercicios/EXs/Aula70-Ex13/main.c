#include <stdio.h>

int main() {
    int n, primo = 1;

    printf("Digite um numero inteiro maior que 2: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("%d e primo.\n", n);
    } else {
        printf("%d nao e primo.\n", n);
    }

    return 0;
}
