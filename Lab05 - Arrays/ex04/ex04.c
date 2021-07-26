#include <stdio.h>

int main(){
    int n, vet[5], i = 0, x = 1;

    printf("<< Listando um vetor de numeros pares>>\n");

    while (i < 6)
    {
    printf("Entre com o numero %d: ", x);
    scanf("%d", &n);
    if (n%2 == 0)
    {
        x++;  
        vet[i] = n;
        i++;
    }else
    {
        printf("Erro: Valor invalido\n");
    }
    
    }

    printf("Os numeros pares digitados foram: %d %d %d %d %d %d", vet[0],  vet[1], vet[2], vet[3], vet[4], vet[5]);
    

    return 0;
}

/*
Crie um programa que lê 6 valores inteiros e em seguida mostra na tela os 
valores lidos. Utilize loops e utilize vetores para armazenar os números.
O programa deve somente aceitar números pares. 
Dica: é melhor usar loop *while* para ler os números

Exemplo de saída:
<< Listando um vetor de numeros pares>>
Entre com o numero 1: 5
Erro: Valor invalido

Entre com o numero 1: 6
Entre com o numero 2: 4
Entre com o numero 3: 0
Entre com o numero 4: 3
Erro: Valor invalido

Entre com o numero 4: 6
Entre com o numero 5: -1
Erro: Valor invalido

Entre com o numero 5: 2
Entre com o numero 6: 50

Os numeros pares digitados foram: 6 4 0 6 2 50
*/
