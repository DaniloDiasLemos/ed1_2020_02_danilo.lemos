#include <stdio.h>

int main(){
    float t = 0;
    char u;
    float conv = 0;

    printf("<< Conversor de Temperatura >>");
    printf("\nDigite a temperatura: ");
    scanf("%f", &t);
    printf("Digite a unidade: ");
    scanf(" %c", &u);

    if (u == 'c')
    {
        conv = t * 1.8 + 32;
        printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit", t, conv);
    }
    if (u == 'f')
    {
        conv = (t - 32)/1.8;
        printf("%.2f graus Fahrenheit equivale a %.2f graus Celsius", t, conv);
    }
    if (u != 'c' && u != 'f')
    {
        printf("A unidade deve ser c para Celsius ou f para Fahrenheit");
    }

    return 0;
}