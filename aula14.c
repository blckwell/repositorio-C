#include <stdio.h>

int main () {

    int vetor[5];
    float m;

    vetor[0] = 50;
    vetor[1] = 40;
    vetor[2] = 30;
    vetor[3] = 20;
    vetor[4] = 10; 

    m = (vetor[0] + vetor[1] + vetor[2] + vetor[3] + vetor[4]) / 5;

    printf("Resultado da media dos valores do vetor: %.2f.\n", m);
    return 0;
}