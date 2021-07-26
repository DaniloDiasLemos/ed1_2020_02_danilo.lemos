#include <stdio.h>

int main() {
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float peso1 = 0;
    float peso2 = 0;
    float peso3 = 0;
    float m = 0;
    char nome;
    
    printf("<< Calculo da Media >>\n");
    printf("Digite o nome do aluno: ");
    scanf(" %c", &nome);
    printf("Digite a nota da prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da prova 2: ");
    scanf("%f", &p2);
    printf("Digite a nota da prova 3: ");
    scanf("%f", &p3);
    printf("Digite o peso da prova 1: ");
    scanf("%f", &peso1);
    printf("Digite o peso da prova 2: ");
    scanf("%f", &peso2);
    printf("Digite o peso da prova 3: ");
    scanf("%f", &peso3);
    m = ((p1*peso1)+(p2*peso2)+(p3*peso3))/(peso1+peso2+peso3);
    printf("A nota media do aluno %c. eh %.2f",nome, m);

    return 0;
}

/*
=> Faça um algoritmo que calcule a média ponderada das notas de 3 provas. 
A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário 
entrar com as notas do aluno ele deve informar a letra inicial do nome do aluno. 
Ao final, mostrar o a letra inicial do nome do aluno juntamente com a sua média.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Calculo da Media >>
Digite o nome do aluno: M
Digite a nota da prova 1: 70
Digite a nota da prova 2: 50
Digite a nota da prova 3: 65
Digite o peso da prova 1: 1
Digite o peso da prova 2: 2
Digite o peso da prova 3: 3
A nota media do aluno M. eh 60.83
-------------------------------------------------------------------------------
*/