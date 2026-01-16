#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

// FUNÇÕES DA BIBLIOTECA STRING.H

int main () {

    setlocale(LC_ALL, "Portuguese");

    char string[N];
    int i;

    printf("Digite um texto:\n");
    gets(string);
    i = strlen(string);
    printf("\nTamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    for(i = 0; i < strlen(string); i ++) {
        printf("%c ", string[i]);
    }

    return 0;
}