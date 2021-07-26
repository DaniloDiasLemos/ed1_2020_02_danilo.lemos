#include <stdio.h>

int main(){
    float p1 = 0;
    float p2 = 0;
    float m = 0;
    
    printf("<< Calculo da Media >>\n");
    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);
    m = (p1 + p2)/2;
    printf("A nota media eh %.2f", m);

    return 0;
}

/*
=> Faça um algoritmo que calcula a média das notas de 2 provas.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite a nota da prova 1: 80
Digite a nota da prova 2: 90
A nota media eh 85
-------------------------------------------------------------------------------
*/