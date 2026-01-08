#include <stdio.h>

int main () {

    char string[10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(string);
    setbuf(stdin, NULL);

    puts("Resultado:");
    puts(string);
    puts("");

    printf("Digite algo (leitura pelo fgets):\n");
    fgets(string, 10, stdin); // stdin -> é o nosso teclado.
    setbuf(stdin, NULL);

    puts("Resultado:");
    puts(string);

    return 0;
}