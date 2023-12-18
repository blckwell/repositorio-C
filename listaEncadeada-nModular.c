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
#include <stdlib.h>

struct controle_receitas
{
    int num_projeto;
    float valor;
    char tipo; // R - receita ou D - despesa
    struct controle_receitas *proximo;
};

int main()
{
    struct controle_receitas *inicio, *proximo;
    struct controle_receitas controle;
    int sair;

    proximo = (struct controle_receitas *)malloc(sizeof(struct controle_receitas));
    if (proximo == NULL)
    {
        printf("Erro, nao foi possivel realizar a alocacao.\n");
    }
    else
    {
        printf("Alocacao realizada com sucesso.\n");
    }

    inicio = proximo;

    printf("insira os campos:\n");

    printf("insira o numero do projeto:\n");
    scanf("%d", &controle.num_projeto);

    printf("insira o valor:\n");
    scanf("%f", &controle.valor);

    setbuf(stdin, NULL);

    printf("insira o tipo: (R) - receita ou (D) - despesa\n");
    scanf("%c", &controle.tipo);

    proximo->num_projeto = controle.num_projeto;
    proximo->tipo = controle.tipo;
    proximo->valor = controle.valor;

    printf("Desejas inserir mais um cadastro? (1) - sim (0) - nao\n");
    scanf("%d", &sair);

    while (sair != 0)
    {
        proximo->proximo = (struct controle_receitas *)malloc(sizeof(struct controle_receitas));
        proximo = proximo->proximo;

        printf("insira os campos:\n");

        printf("insira o numero do projeto:\n");
        scanf("%d", &controle.num_projeto);

        printf("insira o valor:\n");
        scanf("%f", &controle.valor);

        setbuf(stdin, NULL);

        printf("insira o tipo: (R) - receita ou (D) - despesa\n");
        scanf("%c", &controle.tipo);

        proximo->num_projeto = controle.num_projeto;
        proximo->tipo = controle.tipo;
        proximo->valor = controle.valor;

        printf("Desejas inserir mais um cadastro? (1) - sim (0) - nao\n");
        scanf("%d", &sair);
    }

    proximo->proximo = NULL;
    proximo = proximo->proximo;

    while (inicio != NULL)
    {
        printf("numero do projeto: %d\n", inicio->num_projeto);
        printf("valor do projeto: %.2f\n", inicio->valor);
        printf("tipo do projeto: %c\n\n", inicio->tipo);

        inicio = inicio->proximo;
    }

    return 0;
}