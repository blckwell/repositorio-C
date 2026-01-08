#include <stdio.h>

int main () {

    int vetor[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for(i = 0; i < 5; i++) {
        s = s + vetor[i];
    }

    s = s/i;
    printf("Resultado da media dos valores do vetor: %.2f.\n", s);

    return 0;
}