#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

// FUNÇÕES DA BIBLIOTECA STRING.H

int main () {

    setlocale(LC_ALL, "Portuguese");

    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if(ok == 0) {
        printf("Senha correta! Bem vindo ao sistema.\n\n");
    } else {
        printf("Senha incorreta!\n\n");
    }

    return 0;
}