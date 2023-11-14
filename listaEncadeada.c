#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int num;
    struct lista *proximo;
};

void aloca(struct lista *proxima);
void insereValor(struct lista celula);
void menu(int digito);

int main()
{

    struct lista *proxima;
    struct lista celula;
    int digito;
    char sair;
    while (sair != "s")
    {
        menu(digito);

        switch (digito)
        {
        case 0:
            sair = "s";
            break;
        case 1:

            aloca(proxima);

            insereValor(celula);

            proxima->num = celula.num;
            proxima->proximo = NULL;

            break;
        case 2:
            while (proxima != NULL)
            {
                printf("%d\n", proxima->num);
                proxima = proxima->proximo;
            }
            break;
        default:
            printf("opcao invalida!\n");
        }
    }

    return 0;
}

void aloca(struct lista *proxima)
{
    proxima = (struct lista *)malloc(sizeof(struct lista));

    if (proxima == NULL)
    {
        printf("Erro de alocacao!\n");
    }
    else
    {
        printf("Alocacao feita com sucesso!\n");
    }
}

void insereValor(struct lista celula)
{
    printf("Insira o valor desejado:\n");
    scanf("%d", &celula.num);
}

void menu(int digito)
{
    printf("Digite a opcao desejada:\n0 - sair  1 - Inserir valor  2 - imprimir\n");
    scanf("%d", &digito);
}