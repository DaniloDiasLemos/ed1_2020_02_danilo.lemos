#include <stdio.h>

int main(){
    char a1,a2,a3;
    float n1,n2,n3;

    printf("<< Notas da Turma >>\n");
    printf("Entre com o nome do aluno #1: ");
    scanf(" %c", &a1);
    printf("Entre com a nota do aluno #1: ");
    scanf("%f", &n1);
    printf("Entre com o nome do aluno #2: ");
    scanf(" %c", &a2);
    printf("Entre com a nota do aluno #2: ");
    scanf("%f", &n2);
    printf("Entre com o nome do aluno #3: ");
    scanf(" %c", &a3);
    printf("Entre com a nota do aluno #3: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3)
    {
        if (n2 > n3)
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a1, n1, a3, n3);
        }
        if (n3 > n2)
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a1, n1, a2, n2);
        }
        if (n3 == n2)
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a1, n1, a2, n2);
        }
    }
    if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a2, n2, a3, n3);
        }
        if (n3 > n1)        
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a2, n2, a1, n1);
        }
        if (n3 == n1)        
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a2, n2, a1, n1);
        }
    }
    if (n3 > n1 && n3 > n2)
    {
        if (n1 > n2)
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a3, n3, a2, n2);
        }
        if (n2 > n1)        
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a3, n3, a1, n1);
        }
        if (n2 == n1)        
        {
            printf("%c. tem a maior nota(%.2f) e %c. a menor (%.2f)", a3, n3, a1, n1);
        }
    }

    return 0;
}