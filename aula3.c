#include <stdio.h>

#define ano_atual 2026

int main() {

    int idade = 0;
    int ano = 0;
    int calc = 0;

    printf("Valor inicial da idade: %d.\n", idade);
    printf("Valor inicial do ano: %d.\n", ano);

    printf("Digite uma idade:\n");
    scanf("%d", &idade);

    calc = ano_atual - idade;

    printf("Idade informada: %d.\n", idade);
    printf("De acordo com tua idade teu ano de nascimento e: %d.\n", calc);

    return 0;
}