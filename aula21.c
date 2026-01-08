#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main () {

    setlocale (LC_ALL, "Portuguese");

    char string1[N] = {"Lógica de"};
    char string2[N] = {" Programação!"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", string1);
    printf("str2: %s\n", string2);
    
    strcat(string1, string2);

    printf("Depois do strcat:\n");
    puts(string1);

    return 0;
}