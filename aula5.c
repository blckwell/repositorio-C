#include <stdio.h>

int main () {

    float A, B, C, D, soma, sub, mult, div, exp;

    printf("Digite o primeiro valor:\n");
    scanf("%f", &A);
    printf("Digite o segundo valor:\n");
    scanf("%f", &B);
    printf("Digite o terceiro valor:\n");
    scanf("%f", &C);
    printf("Digite o quarto e ultimo valor:\n");
    scanf("%f", &D);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    div = A / B; 
    exp = (A + B) / (C * D);

    printf("Resultados:\n");
    printf("Soma: %.2f.\n", soma);
    printf("Subtracao: %.2f.\n", sub);
    printf("Multiplicacao: %.2f.\n", mult);
    printf("Divisao: %.2f.\n", div);
    printf("Expressao: %.2f.\n", exp);
    
    return 0;
}