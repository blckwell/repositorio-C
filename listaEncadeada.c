#include <stdio.h>
#include <stdlib.h>

struct numerica
{
    int numero;
    struct numerica *proxima;
};

int main()
{

    struct numerica *inicio, *lista;
    struct numerica celula;
    int digito;

    lista = (struct numerica *)malloc(sizeof(struct numerica));
    if (lista == NULL)
    {
        printf("Erro, nao foi possivel realizar a alocacao.\n");
    }

    inicio = lista;

    printf("Digite o primeiro valor a lista:\n");
    scanf("%d", &celula.numero);

    lista->numero = celula.numero;

    while (digito != 0)
    {
        lista->proxima = (struct numerica *)malloc(sizeof(struct numerica));
        lista = lista->proxima;

        printf("Digite outro valor:\n");
        scanf("%d", &celula.numero);

        lista->numero = celula.numero;

        printf("Deseja inserir mais um elemento a lista? (1) - sim ou (0) - nao\n");
        scanf("%d", &digito);
    }

    lista->proxima = NULL;
    lista = lista->proxima;

    printf("Lista encadeada gerada ..\n");

    while (inicio != NULL)
    {
        printf("%d\n", inicio->numero);
        inicio = inicio->proxima;
    }
    return 0;
}