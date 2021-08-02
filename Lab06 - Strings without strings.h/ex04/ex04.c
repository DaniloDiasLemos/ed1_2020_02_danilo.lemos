#include <stdio.h>

int main(){
    char nome1[50],nome2[50], c;
    int i, pos1, pos2, j = 0;

    printf("<< Vetor de char >>\n");

    printf("Digite um nome 1: ");
    pos1 = 0;
    c = getchar();
    while (c != '\n')
    {
        nome1[pos1] = c;
        pos1++;
        c = getchar();
    }

    printf("Digite um nome 2: ");
    pos2 = 0;
    c = getchar();
    while (c != '\n')
    {
        nome2[pos2] = c;
        pos2++;
        c = getchar();
    }

    if (pos1 == pos2)
    {
        for (i = 0; i < pos1; i++)
        {
           if (nome1[i] == nome2[i])
           {
               j++;
           }
        }
        if (j == pos1) 
        {
            printf("Os nomes digitados sao iguais");
        }else
        {
            printf("Os nomes digitados sao diferentes");
        }     
    }else
        {
            printf("Os nomes digitados sao diferentes");
        }
    return 0;
}