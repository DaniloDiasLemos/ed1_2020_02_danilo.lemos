#include <stdio.h>

int main(){
    char nome[50], c;
    int i, pos;

    printf("<< Vetor de char >>\n");

    printf("Digite um nome: ");

    pos = 0;
    c = getchar();
    while (c != '\n')
    {
        nome[pos] = c;
        pos++;
        c = getchar();
    }

    printf("O nome digitado e: ");
    for (i = 0; i < pos; i++)
    {
        printf("%c", nome[i]);
    }
    
    return 0;
}