#include <stdio.h>

int main(){
    int x = 1, maiorP;
    float vet[5],max;

    printf("<< Normalizando as notas >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com a nota do aluno %d: ", x);
        x++;
        scanf("%f", vet[i]);
        if (i == 0)
        {
            max = vet[0];
            maiorP = i;
        }
        if (vet[i] > max)
        {
            max = vet[i];
            maiorP = i;
        }
    }
    vet[maiorP] = 100;

    
    return 0;
}

/*
Elabore um algoritmo para normalizar as notas de uma turma de 5 alunos.
A maior nota deve virar 100 e as demais devem ser modificadas 
proporcionalmente (pense em regra de três).

Exemplo de Saída
<< Normalizando as notas >>
Entre com a nota do aluno 1: 16
Entre com a nota do aluno 2: 20
Entre com a nota do aluno 3: 30
Entre com a nota do aluno 4: 45
Entre com a nota do aluno 5: 50

Notas normalizadas

A nota do aluno 1 é 32
A nota do aluno 2 é 40
A nota do aluno 3 é 60
A nota do aluno 4 é 90
A nota do aluno 5 é 100
*/