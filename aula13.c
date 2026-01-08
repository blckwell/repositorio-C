#include <stdio.h>

int main () {

    int i;

    for(i = 0; i <= 10; i++){
        if(i == 5) {
            continue; //Ignora o print do 5 e volta para o for
        }
        printf("%d ", i);
    }

    return 0;
}