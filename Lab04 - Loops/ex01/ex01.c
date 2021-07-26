#include <stdio.h>

int main(){
    int i = 10;

    printf("<< Contagem regressiva >>\n");

    while (i >= 0)
    {
        printf("%d.. ", i);
        i = i -1;
    }
    printf("FIM!");

    return 0;
}

/*

*/