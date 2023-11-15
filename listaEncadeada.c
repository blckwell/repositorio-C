#include <stdio.h>
#include <stdlib.h>

struct numerica
{
    int num;
    struct numerica *proxima;
};

int main()
{

    struct numerica *lista, *inicio;
    struct numerica celula;
    int digito;
    char opcao;

    lista = (struct numerica *)malloc(sizeof(struct numerica));
    if (lista == NULL)
    {
        printf("Erro, nao foi possivel alocar.\n");
    }
    else
    {
        printf("Alocacao feita com sucesso.\nlista iniciada.\n");
    }

    while (opcao != "n")
    {

        printf("Digite a opcao desejada:\n1 - inserir valor a lista  2 - imprimir lista  0 - sair\n\n");
        scanf("%d", &digito);

        inicio = lista;

        switch (digito)
        {
        case 0:
            return 0;
            break;

        case 1:
            insereValor(celula);
            aloca(lista);

            break;

        case 2:
            imprime(inicio);
            break;
        default:
            printf("Opcao invalida.\n");
        }

        printf("Deseja inserir outro valor a lista?\ns or n\n");
        scanf("%c", &opcao);
    }

    return 0;
}

void insereValor(struct numerica celula, struct numerica *lista)
{
    printf("Insira o valor desejado:\n");
    scanf("%d", &celula.num);

    lista->num = celula.num;

    lista->proxima = NULL;
    lista = lista->proxima;
}

void aloca(struct numerica *lista)
{
    lista = (struct numerica *)malloc(sizeof(struct numerica));
    if (lista == NULL)
    {
        printf("Erro, nao foi possivel alocar.\n");
    }
    else
    {
        printf("Alocacao realizada com sucesso.\n");
    }
}

void imprime(struct numerica *inicio)
{
    while (inicio != NULL)
    {
        printf("%d\n", inicio->num);
        inicio = inicio->proxima;
    }
}