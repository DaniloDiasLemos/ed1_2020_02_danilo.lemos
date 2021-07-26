#include <stdio.h>

int main(){
    int i, x = 1, vet0[5], impar = 0, par = 0;
    printf("<< Pares e Ímpares >>\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d: ", x);
        x++;
        scanf("%d", &vet0[i]);
        if (vet0[i]%2 != 0)
        {
            impar++;
        }else
        {
            par++;
        }
        int vet1[impar], vet2[par];
        
        for (i = 0; i < impar; i++)
        {
            vet1[i] = vet0[i];
        }
        for (i = 0; i < par; i++)
        {
            vet2[i] = vet0[i];
        }
    }
    

    return 0;
}

/*
Leia 5 números inteiros e armazene em um vetor v. Crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2. Note que cada um dos vetores v1 e v2 tem no máximo 5 elementos, mas nem todos os elementos são utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.  
Exemplo de saída:
<< Pares e Ímpares >>
Digite o valor 1: 51
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60

Ímpares: 51
Pares: 60, 70, 80, 60
*/