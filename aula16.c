#include <stdio.h>

int main () {

    int vetor[5];
    int i;

    printf("Digite 5 valores: \n");

    for(i = 0; i < 5; i ++) {
        scanf("%d", &vetor[i]);
    }

    printf("Valores informados pelo usuario:\n");

    for(i = 0; i < 5; i ++) {
        printf("valor [%d] = %d\n", i, vetor[i]);
    }

    return 0;
}