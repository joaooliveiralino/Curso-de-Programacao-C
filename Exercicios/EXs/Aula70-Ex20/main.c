#include <stdio.h>

int main() {
    unsigned long long total = 0;
    unsigned long long graos = 1;

    for (int casa = 1; casa <= 64; casa++) {
        total += graos;
        graos *= 2;
    }

    printf("Total de graos de trigo: %llu\n", total);

    return 0;
}
