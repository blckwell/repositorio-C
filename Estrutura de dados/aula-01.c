// AULA-01
// VARIÁVEIS E A MEMÓRIA

// EM LINGUAGEM C, CADA VARIÁVEL ESTÁ ASSOCIADA A:
/*
1) UM NOME;
2) UM TIPO;
3) UM VALOR;
4) UM ENDEREÇO.
*/

#include <stdio.h>

int main()
{
    int a = 10; // atribuição do valor 10 no endereço de memória da variável a
    int b, c;   // ambas inicializadas com lixo de memória.

    printf("Endereco de memoria da variavel a = %p\n", &a);
    printf("Valor da variavel a = %d\n", a);
    printf("Endereço de memoria da variavel b = %p\n", &b);
    printf("Valor da variavel b = %d <== Lixo de memoria\n", b);
    printf("Endereco de memoria da variavel c = %p\n", &c);
    printf("Valor da variavel c = %d <== Lixo de memoria\n\n", c);
    


    b = 20;    // atribuição do valor 20 no endereço de memória da variável b
    c = a + b; // resultado da soma dos valores a e b atribuidos no endereço de memória da variável
               // b.
    printf("******************************************************\n\n");
    printf("Valor da variavel b = %d\n", b);
    printf("Valor da variavel c = %d\n\n", c);

    return 0;
}