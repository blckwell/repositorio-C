#include <stdio.h>

int main () {

    int i = 0;
    char string[11] = {'O', 'L', 'A', ' ', 'M', 'U', 'N', 'D', 'O', '!', '\0'};

    while(string[i] != '\0') {
        printf("%c ", string[i]);
        i ++;
    }


    return 0;
}  