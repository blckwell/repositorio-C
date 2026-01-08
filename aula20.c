#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

// strcpy (<destino>, <origem>); -> usado para alterar o conteudo de uma string
// strcat (<destino>, <origem>); -> usado para concatenar uma string na outra
// strlen (<string>); -> Usado para mostrar o tamanho da string
// strcmp (<string1>, <string2>); -> usado para comparar se uma string e igual a outra, retornando 0 para igual ou diferente de zero para diferente.
// locale.h -> setlocale (LC_ALL, "Portuguese"); -> usado para aceitar acentos nos programas.

int main () {

    setlocale (LC_ALL, "Portuguese");

    char origem[N] = {"Olá mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);


    return 0;
}