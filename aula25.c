#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprime1 (int vetor[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

}

void imprime2 (int vetor[5]) {
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
}

void imprime3(int *vetor, int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
}

int main () {

    int vetor[5] = {1, 2, 3, 4, 5};

    puts("Primeiro imprime:");
    imprime1(vetor, 5);

    puts("\nSegundo imprime:");
    imprime2(vetor);

    puts("\nTerceiro imprime:");
    imprime3(vetor, 5);

    return 0;
}