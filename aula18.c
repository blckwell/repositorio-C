#include <stdio.h>
#include <stdlib.h>

int main () {

    char string[20];

    printf("Digite algo (scanf convencional):\n");
    scanf("%s", string); // Le a primeira palavra e para no primeiro espaço, inclusive estoura o tamanho original do vetor
    setbuf(stdin, NULL);

    printf("Resultado: %s\n\n", string);

    printf("Digite algo (scanf convencional):\n");
    scanf("%[^\n]s", string);  //Le frases, incluindo espaços, precisamos limitar o tamanho do vetor com por exemplo %10[^\n]s, se não estoura o tamanho original
    setbuf(stdin, NULL);

    printf("Resultado: %s\n\n", string);

    return 0;
}