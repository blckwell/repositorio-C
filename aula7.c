#include <stdio.h>

int main () {

    float nota;

    printf("Insira a nota:\n");
    scanf("%f", &nota);

    if(nota >= 7.0){
        printf("Aprovado(a)!\n");
    } else if(nota < 7.0 && nota >= 3.0) {
        printf("Aluno(a) em exame!\n");
    } else {
        printf("Aluno(a) reprovado!\n");
    }

    return 0;
}