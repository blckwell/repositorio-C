/*Uma empresa comercial possui um programa para controle das receitas e despesas em seus 10 projetos.
Os projetos são numerados de 0 até 9. Faça um programa C que controle a entrada e saída de recursos
dos projetos. O programa deverá ler um conjunto de informações contendo:
Número do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa).
O programa termina quando o valor do código do projeto for igual a -1.
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto.
Ao final do programa, imprirmir o saldo final de cada projeto.

Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos.
Usar o conceito de struct para agrupar as informações lidas. */

#include <stdio.h>

struct controle_receitas {
    int num_projeto;
    float valor;
    char tipo;  //R - receita ou D - despesa
};


int main()
{
    struct controle_receitas controle;

    printf("insira os campos:\n");
    
    printf("insira o numero do projeto:\n");
    scanf("%d", &controle.num_projeto);

    printf("insira o valor:\n");
    scanf("%f", &controle.valor);

    setbuf(stdin, NULL);
    
    printf("insira o tipo: (R) - receita ou (D) - despesa\n");
    scanf("%c", &controle.tipo);

    printf("numero do projeto: %d\n", controle.num_projeto);
    printf("valor do projeto: %.2f\n", controle.valor);
    printf("tipo do projeto: %c", controle.tipo);


    return 0;
}