#include <stdio.h>

int main() {
    int senha;
    const int SENHA_CORRETA = 123456;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != SENHA_CORRETA) {
            printf("Senha Invalida\n");
        }
    } while (senha != SENHA_CORRETA);

    printf("Acesso Permitido\n");

    return 0;
}
