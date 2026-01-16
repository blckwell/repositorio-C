#include <stdio.h>

#define texto "Entrada e saida de dados:"

// TIPAGEM

int main () {

    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("Digite a idade:\n");
    scanf("%d", &idade);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    printf("Digite o nome:\n");
    scanf("%s.\n", nome);

    printf("Saida de dados:\n");
    printf("Idade informada: %d.\n", idade);
    printf("Altura informada: %.2f.\n", altura);
    printf("Nome informado: %s.\n", nome);
    
    return 0;
}