#include <stdio.h>

int main(){
    float v, c;

    printf("<< Comissao >>\n");
    printf("Digite o valor da venda R$: ");
    scanf("%f", &v);

    if (v < 0)
    {
        printf("Digite um valor positivo");
        return 0;
    }
    if (v == 0)
    {
        printf("O vendedor nao vai receber comissao");
        return 0;
    }    
    if (v >= 100000)
    {
        c = 700 + (v * 0.16);
    }
    if (v >= 80000 && v < 100000)
    {
        c = 650 + (v * 0.14);
    }
    if (v >= 60000 && v < 80000)
    {
        c = 600 + (v * 0.14);
    }
    if (v >= 40000 && v < 60000)
    {
        c = 550 + (v * 0.14);
    }
    if (v >= 20000 && v < 40000)
    {
        c = 500 + (v * 0.14);
    }
    if (v < 20000)
    {
        c = 400 + (v * 0.14);
    }

    printf("O valor de comissao a ser pago ao vendedor eh R$%.2f", c);
    
    return 0;
}