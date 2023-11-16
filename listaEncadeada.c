#include <stdio.h>
#include <stdlib.h>

struct numerica
{
    int num;
    struct numerica *proxima;
};

int main()
{
    struct numerica *inicio, *lista;
    struct numerica celula;
    int digito;

    inicio = NULL;

    if(inicio == NULL) {
        printf("Nao existe uma lista .. \n");
        printf("criando lista ..\n");
        lista = (struct numerica *)malloc(sizeof(struct numerica));
        if(lista == NULL) {
            printf("Erro, nao foi possivel alocar.\n");
        }
    }

    inicio = lista; 

    while(digito != 0){
        if(lista == NULL){
            lista = (struct numerica *)malloc(sizeof(struct numerica));
        }

        printf("Digite o numero que deseja inserir na lista:\n");
        scanf("%d", &celula.num);

        lista->num = celula.num;
        lista->proxima = NULL;
        lista = lista->proxima;

        printf("Deseja inserir outro valor a lista?(1) - sim  (2) - nao\n");
        scanf("%d", &digito);

        if(digito == 1) {
            printf("Ok, vamos inserir mais valores entao ..\n");
        } else {
            printf("Certo. Valeu, flw .. fim.\n");
        }
    }

    while(inicio != NULL) {
        printf("Aqui estao os valores da lista:\n");
        printf("%d\n\n", inicio->num);
        inicio = inicio->proxima;
    }
    
    return 0;
}