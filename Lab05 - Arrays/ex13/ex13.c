#include <stdio.h>

int main(){
    int i, x = 1, vet[5];

    printf("<< Zerando negativos >>\n");
    for (i = 0; i < 5; i++)
    {
        printf("Entre com o numero %d: ", x);
        x++;
        scanf("%d", &vet[i]);
        if (vet[i] < 0)
        {
            vet[i] = 0;
        }
    }

    printf("\nNegativo zerados: %d ",vet[0]);
    for (i = 1; i < 5; i++)
    {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}

/*
Leia um vetor de 5 posições e atribua valor 0 para todos os elementos
que possuírem valores negativos. Mostre o vetor final.

Exemplo de saída:
<< Zerando negativos >>
Entre com o numero 1: 5
Entre com o numero 2: -6
Entre com o numero 3: 4
Entre com o numero 4: 0
Entre com o numero 5: -3

Negativo zerados: 5 0 4 0 0 
*/