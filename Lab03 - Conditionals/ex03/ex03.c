#include <stdio.h>

int main(){
    float v = 0;
    int f = 0;
    float final = 0;

    printf("<< Valor do Produto com imposto >>");
    printf("\nDigite o valor do produto R$: ");
    scanf("%f", &v);
    printf("Digite a unidade da federacao: ");
    scanf("%d", &f);
    if (f == 1)
    {
        final = (v * 0.07) + v;
        printf("Valor final com impostos R$: %.2f", final);
    }
    if (f == 2)
    {
        final = (v * 0.12) + v;
        printf("Valor final com impostos R$: %.2f", final);
    }
    if (f == 3)
    {
        final = (v * 0.15) + v;
        printf("Valor final com impostos R$: %.2f", final);
    }
    if (f == 4)
    {
        final = (v * 0.08) + v;
        printf("Valor final com impostos R$: %.2f", final);
    }

    return 0;
    
}