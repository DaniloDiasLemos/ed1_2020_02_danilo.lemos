#include <stdio.h>

int main(){

    int vet[5], i = 0, x = 1;

    printf("<< Listando um vetor - com loops >>\n");

    while (i < 6)
    {
        printf("Entre com o numero %d: ", x);
        x++;
        scanf("%d", &vet[i]);
        i += 1;
    }

    printf("\nOs valores lidos sao: %d %d %d %d %d %d", vet[0], vet[1], vet[2], vet[3], vet[4], vet[5]);

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
(pense qual o melhor loop: for, while ou do-while)
 
Exemplo de saída:
<< Listando um vetor - com loops >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Valores lidos: 5 6 4 0 3 6
*/
