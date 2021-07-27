#include <stdio.h>

int main(){
    int i,x, z = 1, y = 10001;
    float m;

    printf("<< Universidade X >>\n");
    while (y > 10000)
    {
        printf("Quantos alunos serao cadastrados: ");
        scanf("%d", &x);
        if (x <= 10000)
        {
            y = x;
        }else
        {
            printf("Erro! O numero maximo de alunos permitido eh 10000.\n");
        }
    }
    int vet[x], nm[x];
    char cs[x];
    float cra[x];

    for (i = 0; i < x; i++)
    {
        printf("\nEntre com o numero do aluno: ");
        scanf("%d", &nm[i]);
        printf("Entre com a classe social do aluno %d: ", nm[i]);
        scanf(" %c", &cs[i]);
        printf("Entre com o CRA do aluno %d: ", nm[i]);
        scanf("%f", &cra[i]);
    }
    printf("\n\n==== Alunos Cadastrados ====\n");
    for (i = 0; i < x; i++)
    {
        printf("Numero: %d Classe Social: %c CRA: %.2f\n",nm[i], cs[i], cra[i]);
    }

    return 0;
}

/*
Faça um programa que armazene informações sobre os alunos de uma universidade. 
O número máximo de alunos que o sistema pode cadastrar é 10000. Os dados a 
serem armazenados são: número de matrícula (inteiro); 
classe social (A, B, C, D ou E); CRA (real). Ao iniciar o programa, informe 
quantos usuários serão cadastrados. Depois de realizado o cadastro, mostre 
todos os dados lidos. A saída do programa deve ser como o exemplo abaixo.
* Proibido o uso de structs

Exemplo de saída:
<< Universidade X >>
Quantos alunos serão cadastrados: 2

Entre com o número do aluno: 5
Entre com a classe social do aluno 5: B
Entre com o CRA do aluno 5: 70

Entre com o número do aluno: 7
Entre com a classe social do aluno 7: B
Entre com o CRA do aluno 7: 60

==== Alunos Cadastrados ====
Número: 5 Classe Social: B CRA: 70.00
Número: 7 Classe Social: B CRA: 60.00
*/