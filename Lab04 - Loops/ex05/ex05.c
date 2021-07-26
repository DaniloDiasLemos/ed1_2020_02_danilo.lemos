#include <stdio.h>

int main(){
    int i = 0;

    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d", &i);

    do
    {
        printf("%d.. ", i);
        i = i -1;   
    } while (i >= 0);
    
    printf("FIM!");

    return 0;
}

/*

*/