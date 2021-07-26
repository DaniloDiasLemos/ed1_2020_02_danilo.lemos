#include <stdio.h>

int main(){
    int x = 1, vet[4], max, min, maiorP, menorP;
    float mean;

    printf("<< Five Values with index >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Input #%d: ", x);
        x++;
        scanf("%d", &vet[i]);
        if (i == 0)
        {
            max = vet[0];
            min = vet[0];
            maiorP = i;
            menorP = i;
        }
        if (vet[i] > max)
        {
            max = vet[i];
            maiorP = i;
        }
        if (vet[i] < min)
        {
            min = vet[i];
            menorP = i;
        }
    }

    mean = (vet[0] + vet[1] + vet[2] + vet[3] + vet[4])/5;

    printf("The numbers entered are: %d %d %d %d %d\n", vet[0], vet[1], vet[2], vet[3], vet[4]);
    printf("Max. Value: %d, index %d of the array\n", max, maiorP);
    printf("Min. Value: %d, index %d of the array\n", min, menorP);
    printf("Mean: %.2f", mean);

    
    return 0;
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores
Mostrar o índice (index) do vetor associado ao maior número e ao menor número 

Exemplo de saída:
<< Five Values with index >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6, index 1 of the array
Min. Value: 0, index 3 of the array
Mean: 3.6
*/