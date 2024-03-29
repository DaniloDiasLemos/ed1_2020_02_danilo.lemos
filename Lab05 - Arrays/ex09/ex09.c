#include <stdio.h>

int main(){
    int i,x, z = 1, y = 101;
    float m;

    printf("<< Media de n alunos. Maximo 100 alunos >>\n");
    while (y > 100)
    {
        printf("Entre com o numero de alunos: ");
        scanf("%d", &x);
        if (x <= 100)
        {
            y = x;
        }else
        {
            printf("Erro! O numero maximo de alunos permitido eh 100.\n");
        }
    }
    float vet[x];
    for (i = 0; i < x; i++)
    {
        printf("Digite a nota do aluno %d: ", z);
        z++;
        scanf("%f", &vet[i]);
    }
    for (i = 0; i < x; i++)
    {
        m = m + vet[i];
    }
    m = m/x;
    printf("\nRelatorio de notas\n");
    for (i = 0; i < x; i++)
    {
        printf("Nota do aluno %d: %.2f\n", i, vet[i]);
    }
    printf("Media da turma: %.2f\n", m);

    return 0;
}

/*
Faça um programa que calcula a média das notas dos alunos de uma turma. Note 
que uma turma pode ter no máximo 100 alunos (mostrar uma mensagem de erro 
caso o número escolhido seja maior que 100). Peça para o usuário entrar com 
o número de alunos e ao final mostre a nota de todos os alunos.

Exemplo de Saída
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 4
Digite a nota do aluno 1: 6
Digite a nota do aluno 2: 7
Digite a nota do aluno 3: 5
Digite a nota do aluno 4: 4

Relatorio de Notas
Nota do aluno 0: 6
Nota do aluno 1: 7
Nota do aluno 2: 5
Nota do aluno 3: 4
Media da turma:  5.5

------------------------------------
Exemplo de Saída 2
<< Media de n alunos. Maximo 100 alunos >>
Entre com o numero de alunos: 400
Erro! O numero maximo de alunos permitido eh 100.
*/
