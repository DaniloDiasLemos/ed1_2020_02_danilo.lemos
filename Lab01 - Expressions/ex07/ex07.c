#include <stdio.h>

int main() {
    int dias = 0;
    float bruto = 0;
    float roubo = 0;
    float liquido = 0;
    float ir = 0;
    float iss = 0;

    printf("<< Pagamento encanador >>\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    bruto = dias * 30.00;
    ir = 0.08 * bruto;
    iss = 0.04 * bruto;
    roubo = ir + iss;
    liquido = bruto - roubo;
    printf("Valor bruto R$: %.2f\n", bruto);
    printf("Valor liquido R$: %.2f\n", liquido);
    printf("ISS R$: %.2f\n", iss);
    printf("IR R$: %.2f\n", ir);
}

/*
=> Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o número de dias trabalhados pelo encanador 
e imprima o valor bruto, o imposto, e a quantia líquida que deverá ser paga ao encanador, sabendo-se que são descontados 8% para 
imposto de renda e 4% de ISS. 

-------------------------------------------------------------------------------
Exemplo de saída:

<< Pagamento encanador >>
Digite o numero de dias trabalhados: 30
Valor bruto R$: 900
Valor liquido R$: 792
ISS R$: 36
IR R$: 72
-------------------------------------------------------------------------------
*/