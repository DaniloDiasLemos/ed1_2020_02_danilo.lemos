#include <stdio.h>

int main() {
    float q = 780000.00;
    float ganhador1 = 0;
    float ganhador2 = 0;
    float ganhador3 = 0;


    printf("<< Loteria >>\n");
    ganhador1 = 0.46 * 780000;
    ganhador2 = 0.32 * 780000;
    ganhador3 = 0.22 * 780000;
    printf("Valor total do premio: %.2f\n", q);
    printf("Primeiro vencedor: %.2f\n", ganhador1);
    printf("Segundo vencedor: %.2f\n", ganhador2);
    printf("Terceiro vencedor: %.2f\n", ganhador3);

}

/*
=> A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso, sendo que da quantia total: 
    O primeiro ganhador receberá 46%;
    O segundo receberá 32%;
    O terceiro receberá o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Loteria >>
Valor total do premio: 780000
Primeiro vencedor: 358800
Segundo vencedor: 249600
Terceiro vencedor: 171600
-------------------------------------------------------------------------------
*/