#include <stdio.h>

int main(){
    int i = 0;

    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d", &i);

    while (i <= 0)
    {
        printf("%d.. ", i);
        i = i +1;
    }
    printf("FIM!");

    return 0;
}

/*

*/