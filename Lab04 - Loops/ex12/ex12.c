#include <stdio.h>

int main(){
    int n = 0;
    int soma = 0;

    printf("<< Soma de n valores naturais >>\n");
    printf("Quantos numeros deseja somar? ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        soma = i + soma;
    }

    printf("A soma dos %d primeiros numeros naturais eh: %d", n, soma);
    

    return 0;
}

/*

*/