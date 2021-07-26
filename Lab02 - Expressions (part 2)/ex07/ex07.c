#include <stdio.h>

int main() {
    int n1 = 0;
    int n2 = 0;
    int and = 0;
    int or = 0;
    int xor = 0;
    int not = 0;

    printf("== Operadores Booleanos ==\n");
    printf("Digite 0 para falso e nao 0 para verdadeiro\n");
    printf("Entre com o primeiro valor (A): ");
    scanf("%d", &n1);
    printf("Entre com o primeiro valor (B): ");
    scanf("%d", &n2);

    if (n1 != 0 && n2 != 0)
    {
        and = 1;
    }
    if (n1 != 0 || n2 != 0)
    {
        or = 1;
    }
    if ((n1 != 0 || n2 != 0) && !(n1 != 0 && n2 != 0))
    {
        xor = 1;
    }
    if (n1 == 0)
    {
        not = 1;
    }else
    {
        not = 0;
    }
    
    printf("A and B: %d\n", and);
    printf("A or B: %d\n", or);
    printf("A xor B: %d\n", xor);
    printf("not A: %d\n", not);

    return 0;
}

/*
=> Faça um algoritmo que mostre o funcionamento dos operadores lógicos. Peça para o usuário entrar com dois valores inteiros,, 
onde 0 implica em FALSO e qualquer outro número implica em VERDADEIRO.
Obs: XOR = (p || q) && !(p && q)

-------------------------------------------------------------------------------
Exemplo de saída:

== Operadores Booleanos ==
Digite 0 para falso e nao 0 para verdadeiro
Entre com o primeiro valor (A): -1
Entre com o segundo valor (B): 3
A and B: 1
A or B: 1
A xor B: 0
not A: 0
-------------------------------------------------------------------------------
*/