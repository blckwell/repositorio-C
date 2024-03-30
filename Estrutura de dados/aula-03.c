// PONTEIROS
// SIZEOF -> TIPOS DE DADOS

#include <stdio.h>

int main()
{

    int a;

    printf("sizeof(a) = %d bytes \n", sizeof(a));

    printf("sizeof(int) = %d bytes \n", sizeof(int));
    printf("sizeof(short) = %d bytes \n", sizeof(short));
    printf("sizeof(long) = %d bytes \n", sizeof(long));
    printf("sizeof(unsigned long) = %d bytes\n", sizeof(unsigned long));
    printf("sizeof(float) = %d bytes \n", sizeof(float));
    printf("sizeof(double) = %d bytes \n", sizeof(double));

    printf("sizeof(void *) = %d bytes \n", sizeof(void *));
    printf("sizeof(int *) = %d bytes \n", sizeof(int *));
    printf("sizeof(int **) = %d bytes \n", sizeof(int **));
    printf("sizeof(int ***) = %d bytes \n", sizeof(int ***));
    printf("sizeof(float *) = %d bytes \n", sizeof(float *));

    return 0;
}