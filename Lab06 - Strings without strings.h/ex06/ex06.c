#include <stdio.h>

int main(){
    unsigned char nome[40],nomeP[40], nomeL[40], c;
    int i, pos, j, x, z;

    printf("<< Vetor de char >>\n");

    printf("Digite o primeiro nome e ultimo nome: ");
    pos = 0;
    c = getchar();
    while (c != '\n')
    {
        nome[pos] = c;
        pos++;
        c = getchar();
    }

    z = 0;

    while (nome[z] != ' ')
    {
        nomeP[z] = nome[z];
        z++;
    }

    j = z+1;
    x = 0;

    while (nome[j] != '\n')
    {
        nomeL[x] = nome[j];
        x++;
        j++;
    }

    printf("Nome: %s", nomeP);

    printf("\nSobrenome: %s", nomeL);
    

    return 0;
}