#include <stdio.h>

int main(){
    char letra = 'f', chute;
    int chances = 5, temp = chances;

    printf("<< Forca de uma letra so >>\n");

    for (int i = 0; i < chances; i++)
    {
        printf("\nQual a letra? ");
        scanf(" %c", &chute);
        if (chute == letra)
        {
            printf("ACERTOU!");
            return 0;
        }else
        {
            temp = temp -1;
            printf("ERRADO! Voce tem mais %d chances\n", temp);
        }
    }

    return 0;
}

/*

*/