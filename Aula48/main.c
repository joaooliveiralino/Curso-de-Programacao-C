#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
printf("Digite sua idade: ");
scanf("%d", &idade);

if(idade <= 5 || idade >= 60)
    printf("Este passageiro tem direito à gratuidade!");
else
    printf("Este passageiro não tem direito à gratuidade!");


    return 0;

}
