#include <stdio.h>

int main() {
    float s = 0;
    float aumento = 0;

    printf("<< Aumento Salarial >>\n");
    printf("Digite o valor do salario R$: ");
    scanf("%f", &s);
    aumento = (0.25 * s)  + s;
    printf("Apos 25 porcento de aumento o salario fica em R$ %.2f", aumento);

    return 0;
}

/*
=> 5)	Receber o salário de um funcionário, calcular e mostrar seu novo 
salário, sabendo que ele recebeu um aumento de 25%. 
OBS: para mostrar o sinal de % no printf use dois símbolos de %. 
Exemplo: printf(“Após 25%% de ...”). Se você utilizar somente um % o 
compilador interpretará como um especificador de formato)
-------------------------------------------------------------------------------
Exemplo de saída:

<< Aumento Salarial >>
Digite o valor do salario R$: 4000
Apos 25% de aumento o salario fica em R$ 5000.00
-------------------------------------------------------------------------------
*/