#include <stdio.h>

int main() {
    int a, b, resultado = 0;
    int fator, negativo = 0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    fator = b;

    if (fator < 0) {
        negativo = 1;
        fator = -fator;
    }

    for (int i = 1; i <= fator; i++) {
        resultado += a;
    }

    if (negativo) {
        resultado = -resultado;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}
