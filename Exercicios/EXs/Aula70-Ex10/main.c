#include <stdio.h>

int main() {
    unsigned long long total = 0;
    unsigned long long valor = 1;

    for (int dia = 1; dia <= 30; dia++) {
        total += valor;
        valor *= 2;
    }

    printf("Total guardado apos 30 dias: %llu centavos\n", total);
    printf("Equivalente a R$ %.2f\n", total / 100.0);

    return 0;
}
