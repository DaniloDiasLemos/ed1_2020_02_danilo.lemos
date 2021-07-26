#include <stdio.h>

int main() {
    int n = 0;
    int a = 0;
    int s = 0;

    printf("<< Sucessor e Antecessor >>\n");
    printf("Digite um numero: ");
    scanf("%d", &n);
    a = n - 1;
    s = n + 1;

    printf("\nAntecessor: %d\n", a);
    printf("Numero: %d\n", n);
    printf("Sucessor: %d\n", s);

    return 0;
}

/*
=> Ler um número e retorne seu antecessor e seu sucessor.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Sucessor e Antecessor >>
Digite um numero: 2

Antecessor: 1
Numero: 2
Sucessor: 3
-------------------------------------------------------------------------------
*/