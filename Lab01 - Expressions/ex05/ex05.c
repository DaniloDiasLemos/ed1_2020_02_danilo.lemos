#include <stdio.h>

int main() {
    float s = 0;
    float aumento = 0;

    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$: ");
    scanf("%f", &s);
    aumento = (0.25 * s)  + s;
    printf("Apos 25 porcento de aumento o salario fica em R$ %.2f", aumento);
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/