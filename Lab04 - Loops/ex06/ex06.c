#include <stdio.h>

int main(){
    int i = 0;

    printf("<< Contagem regressiva >>\n");
    printf("Qual eh o numero inicial? ");
    scanf("%d", &i);

    for (int n = i; n >= 0; n--)
    {
        printf("%d.. ", n);
    }
    
    printf("FIM!");

    return 0;
}

/*

*/