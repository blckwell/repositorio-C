#include <stdio.h>

struct numerica {
    int num;
    struct numerica *proxima; 
};

int main () {

struct numerica *lista, *le;
struct numerica celula;
int digito;

printf("digite 1 - para inserir valor a lista ou 0 - para sair:\n");
scanf("%d", &digito);
while(digito != 0) {
    lista = (struct numerica*)malloc(sizeof(struct numerica));
    if(lista == NULL) {
        printf("Erro, nao foi possivel alocar!\n");
    } else {
        printf("Alocacao realizada com sucesso.\n");

        le = lista;

        printf("Digite o valor que deseja inserir na lista:\n");
        scanf("%d", &celula.num);

        lista->num = celula.num;  
    }
}

    while (le != NULL) {
        printf("%d\n", le->num);
        le = lista->proxima;
    }

    return 0;
}