// PONTEIROS
// DIDÁDICA DE PONTEIROS
/*

EXEMPLO 1 DE PONTEIRO:

OBS: * -> SIGNIFICA CONTEÚDO DE UM ENDEREÇO(DE MEMÓRIA);
OS PONTEIROS POSSUEM TAMANHO DE 8 BYTES.

OBS: QUANDO UM PONTEIRO TEM SEU CONTEÚDO NULO NÃO É POSSÍVEL IMPRMIR ESSE CONTEÚDO PORQUE 
ESSE CONTEÚDO ESTÁ EM UMA POSIÇÃO INVÁLIDA DE MEMÓRIA.

OBS: p1 = &p2, ISSO RESULTA EM ERRO DE COMPILAÇÃO PORQUE OS TIPOS SÃO INCOPATÍVEIS
P1 GUARDA UM ENDEREÇO DE MEMÓRIA DE INTEIROS E P2 É UM PORTEIRO PARA UM INTEIRO
&p2 É UM ENDEREÇO DE MEMÓRIA (DE ONDE "RESIDE") UM PONTEIRO PARA UM INTEIRO.

- TIPO DE DADO -> (JOGADOR DO BARCELONA)
- NOME DA VARIÁVEL -> (RONALDINHO)
- VALOR DA VARIÁVEL -> (10)
- ENDEREÇO DA VARIÁVEL -> (AVENIDA DO MESSI)

EXEMPLO 2 DE PONTEIRO:

- TIPO DE DADO -> (CARTEIRO(PONTEIRO) DE JOGADOR DO BARCELONA)
- NOME DA VARIÁVEL -> (JAIMINHO)
- VALOR DA VARIÁVEL -> (AVENIDA DO MESSI)
- ENDEREÇO DA VARIÁVEL -> (RUA DO JAIMINHO)

EM C:

- JAIMINHO = &MESSI;
- ENDEREÇO DA VARIÁVEL -> &JAIMINHO = RUA DO JAIMINHO
- VALOR DA VARIÁVEL -> JAIMINHO = AVENIDA DO MESSI
- CONTEÚDO DE UM ENDEREÇO -> *(JAIMINHO) = *(AVENIDA DO MESSI) = 10
*/

#include <stdio.h>

int main()
{

    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("Conteudo de a = %d\n", a);
    printf("Endereco armazenmado em p1 = %p\n", p1); // ENDEREÇO O ARMAZENADO EM P1 
    printf("Endereco de p1 = %d\n", &p1); // ENDEREÇO DE P1 
    printf("Conteudo de p1 = %d\n", p1);  
                                         
    printf("Endereco de p2 = %d\n\n", &p2);

    p1 = &a;

    printf("Conteudo de *p1 quando apontado para o endereco de a, *p1 = %d\n\n", *p1);

    p2 = p1;

    printf("Conteudo de p2 quando apontado para p1, p2 = %d\n\n", *p2);

    *p2 = 4; // p2 aponta para p1 que recebe o valor 4

    printf("O que acontece quando p2 esta apontado em p1 e atribui-se o valor 4 em p2, p1 = %d\n\n", *p2);

    return 0;
}