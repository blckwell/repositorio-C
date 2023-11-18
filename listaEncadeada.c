#include <stdio.h>
#include <stdlib.h>

struct numerica
{
    int numero;
    struct numerica *proxima;
};

struct numerica *inicia_lista(struct numerica *lista);
struct numerica *insere_elemento_lista(int digito, struct numerica celula, struct numerica *lista);
void imprime_lista(struct numerica *inicio);

int main()
{

    struct numerica *inicio, *lista;
    struct numerica celula;
    int digito;

    inicio = inicia_lista(lista);

    lista = insere_elemento_lista(digito, celula, lista);

    printf("Lista encadeada gerada ..\n");

    while (inicio != NULL)
    {
        printf("%d\n", inicio->numero);
        inicio = inicio->proxima;
    }

    return 0;
}

struct numerica *inicia_lista(struct numerica *lista)
{
    printf("Iniciando lista ..\n");

    lista = (struct numerica *)malloc(sizeof(struct numerica));
    if (lista == NULL)
    {
        printf("Erro, nao foi possivel realizar a alocacao.\n");
    }
    else
    {
        printf("Alocacao realizada com sucesso!\n");
    }

    return lista;
}

struct numerica *insere_elemento_lista(int digito, struct numerica celula, struct numerica *lista)
{

    printf("Digite o primeiro valor a lista:\n");
    scanf("%d", &celula.numero);

    lista->numero = celula.numero;

    printf("Deseja inserir mais um elemento na lista? (1) - sim ou (2) - nao.\n");
    scanf("%d", &digito);

    while (digito != 0)
    {
        lista->proxima = (struct numerica *)malloc(sizeof(struct numerica));
        lista = lista->proxima;

        printf("Digite outro valor:\n");
        scanf("%d", &celula.numero);

        lista->numero = celula.numero;

        printf("Deseja inserir mais um elemento a lista? (1) - sim ou (0) - nao\n");
        scanf("%d", &digito);
        if (digito == 1)
        {
            printf("blzzz ..\n");
        }
        else
        {
            lista->proxima = NULL;
            lista = lista->proxima;
        }
    }

    return lista;
}

void imprime_lista(struct numerica *inicio)
{
    while (inicio != NULL)
    {
        printf("%d\n", inicio->numero);
        inicio = inicio->proxima;
    }
}