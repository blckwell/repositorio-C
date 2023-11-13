#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ponteiro);
void update (int *ponteiro);

int main()
{

    int var;
    int *ponteiro;

    printf("Insira um valor:\n");
    scanf("%d", &var);

    ponteiro = &var;

    display(var, ponteiro);
    
    update(ponteiro);    

    display(var, ponteiro);

    return 0;
}

void display(int var, int *ponteiro)
{
    printf("Conteudo de var = %d\n", var);
    printf("Endereco de var = %p\n", &var);
    printf("Conteudo apontado pelo ponteiro = %d\n", *ponteiro);
    printf("Endereco apontado pelo ponteiro = %p\n", ponteiro);
    printf("Endereco do ponteiro            = %p\n", &ponteiro);
}

void update (int *ponteiro) {
    printf("Insira o novo valor para a variavel:\n");
    scanf("%d", ponteiro);
}

// Ponteiros:
// *ponteiro: o apontado por, conteúdo do endereco da variavel que ponteiro aponta
//  ponteiro: o endereco da variavel
// &ponteiro: o endereco do ponteiro