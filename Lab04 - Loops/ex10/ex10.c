#include <stdio.h>

int main(){
    int n = 0;
    int i = 0;
    int soma = 0;

    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos numeros deseja somar? ");
    scanf("%d", &n);
    i = n;

    while (i > 0)
    {
        soma = i + soma;
        i -= 1;
    }

    printf("A soma dos %d primeiros numeros naturais eh: %d", n, soma);
    

    return 0;
}

/*

*/