#include <stdio.h>

int main(){
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float peso1 = 1;
    float peso2 = 1;
    float peso3 = 2;
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
    m = ((p1*peso1)+(p2*peso2)+(p3*peso3))/(peso1+peso2+peso3);
    if (m >= 60)
    {
        printf("A nota media do aluno %c. eh %.2f => APROVADO!",nome, m);
    }else
    {
        printf("A nota media do aluno %c. eh %.2f => REPROVADO!",nome, m);
    }

    return 0;
}