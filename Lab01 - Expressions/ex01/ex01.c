#include <stdio.h>

int main(){
    float n = 0;
    float quadrado = 0;

    printf("<< Calculo do Quadrado de n >>\n");
    printf("Digite um numero: ");
    scanf("%f", &n);
    quadrado = n * n;
    printf("O valor de %.2f ao quadrado e %.2f", n, quadrado);
}

/*
=> Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.

-------------------------------------------------------------------------------
Exemplo de saída: 
<< Calculo do Quadrado de n>>
Digite um número: 2.5O 
O valor de 2.5 ao quadrado é 6.25
-------------------------------------------------------------------------------
*/