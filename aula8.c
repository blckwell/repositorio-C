#include <stdio.h>

int main () {

    // DIAS DA SEMANA
    int digito = 0;
    int opcao = 1;

    while (opcao != 0) { 
        printf("Digite um numero de 1 a 7 que diremos o dia da semana equivalente!\n");
        scanf("%d", &digito);
    
        switch (digito) {
            case 1: printf("Segunda-feira!\n");
            break;

            case 2: printf("Terca-feira!\n");
            break;

            case 3: printf("Quarta-feira!\n");
            break;

            case 4: printf("Quinta-feira!\n");
            break;

            case 5: printf("Sexta-feira!\n");
            break;

            case 6: printf("Sabado!\n");
            break;

            case 7: printf("Domingo!\n");
            break;

            default: printf("Numero invalido.\n");
            break;
        }

        printf("Deseja computar um dia da semana novamente?\n(1) - Sim ou (0) - Nao\n");
        scanf("%d", &opcao);

    } 

    return 0;
}