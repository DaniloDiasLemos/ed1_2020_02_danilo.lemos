#include <stdio.h>
#include <stdbool.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    bool and = false;
    bool or = false;
    bool xor = false;
    bool not = false;

    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d", &n1);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d", &n2);

    if (n1 != 0 && n2 != 0)
    {
        and = true;
    }
    if (n1 != 0 || n2 != 0)
    {
        or = true;
    }
    if ((n1 != 0 || n2 != 0) && !(n1 != 0 && n2 != 0))
    {
        xor = true;
    }
    if (n1 == 0)
    {
        not = true;
    }else
    {
        not = false;
    }
    
    printf("A and B: %s\n", and?"Verdadeiro":"Falso");
    printf("A or B: %s\n", or?"Verdadeiro":"Falso");
    printf("A xor B: %s\n", xor?"Verdadeiro":"Falso");
    printf("not A: %s\n", not?"Verdadeiro":"Falso");

    return 0;
}