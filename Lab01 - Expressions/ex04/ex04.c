#include <stdio.h>

int main() {
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float n4 = 0;
    float m = 0;

    printf("<< Media Aritmetica >>\n");
    printf("Digite a 1a nota: ");
    scanf("%f", &n1);
    printf("Digite a 2a nota: ");
    scanf("%f", &n2);
    printf("Digite a 3a nota: ");
    scanf("%f", &n3);
    printf("Digite a 4a nota: ");
    scanf("%f", &n4);
    m = (n1+n2+n3+n4)/4;
    printf("===Notas===\n");
    printf("Nota 1: %.2f; Nota 2: %.2f; Nota 3: %.2f; Nota 4: %.2f\n", n1, n2, n3, n4);
    printf("Media: %.2f", m);

    return 0;
}

/*
=> Ler quatro notas e mostrar as notas e a média aritmética obtida.

-------------------------------------------------------------------------------
Exemplo de saída:

<< Media Aritmetica >>
Digite a 1a nota: 30
Digite a 2a nota: 40
Digite a 3a nota: 60
Digite a 4a nota: 30
===Notas===
Nota 1: 30; Nota 2: 40; Nota 3: 60; Nota 4: 30
Media: 40
-------------------------------------------------------------------------------
*/