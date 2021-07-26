#include <stdio.h>

int main(){

    int vet[6], i = 0, x = 1;

    printf("<< Listando um vetor - com loops >>\n");

    while (i < 6)
    {
        printf("Entre com o numero %d: ", x);
        x++;
        scanf("%d", &vet[i]);
        i += 1;
    }

    printf("\nOs valores lidos sao: %d ",vet[5]);
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 0;
}

/*
Faça um programa em que o usuário digita 6 números inteiros e o programa mostra
na tela os 6 números digitados na ordem inversa (obrigatório o uso de loops)

Exemplo de saída:
<< Listando um vetor em ordem inversa >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: 3
Entre com o numero 6: 6

Ordem inversa dos numeros: 6 3 0 4 6 5
*/
