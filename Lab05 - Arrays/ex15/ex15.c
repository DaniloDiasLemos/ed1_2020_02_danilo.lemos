#include <stdio.h>

int main(){
    int vet[8], i, j = 0, x = 1, igual[8], k = 0;

    printf("<< Valores iguais >>\n");

    for (i = 0; i < 8; i++)
    {
        printf("Entre com o numero %d: ", x);
        x++;
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < 8; i++  )
    {
        if (vet[i] == vet[i-1])
        {
            igual[k] = vet[i];
            k++;
        }
    }

    printf("Valores repetidos: %d", igual[0]);
    for (i = 1; i < 8; i++)
    {
        printf("%d, ", igual[i]);
    }

    return 0;
}

/*
Faça um programa que leia um vetor de 8 posições e verifique se existem 
valores iguais e os escreva (cada número repetido deve aparecer somente 
uma vez na resposta)

Exemplo de saída:
<< Valores iguais >>
Entre com o numero 1: 5
Entre com o numero 2: 6
Entre com o numero 3: 4
Entre com o numero 4: 5
Entre com o numero 5: -3 
Entre com o numero 6: -3
Entre com o numero 7: -3
Entre com o numero 8: 6


Valores repetidos: 5, 6, -3
*/