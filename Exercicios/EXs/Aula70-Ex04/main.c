#include <stdio.h>

int main() {
    int i = 1;
    long soma = 0;
    int contador = 0;

    /* Restricao: no maximo 500 execucoes do bloco de repeticao */
    while (i <= 1000 && contador < 500) {
        soma += i;
        i += 2;
        contador++;
    }

    printf("Soma dos numeros impares entre 1 e 1000: %ld\n", soma);
    printf("Numero de iteracoes realizadas: %d\n", contador);

    return 0;
}
