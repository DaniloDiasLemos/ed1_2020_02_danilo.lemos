#include <stdio.h>

int main(){
    int x = 1, n;
    float km,ms;

    while (x == 1)
    {
        printf("<< Conversor >>\n");
        printf("Digite uma opcao\n");
        printf("1 - para converter de km/h para m/s\n");
        printf("2 - para converter de ms/s para km/h\n");
        printf("0 - para sair\n");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Digite a velocidade (km/h): ");
            scanf("%f", &km);
            ms = km/3.6;
            printf("A velocidade em m/s eh %.2f\n", ms);
            break;

        case 2:
            printf("Digite a velocidade (m/s): ");
            scanf("%f", &ms);
            km = ms*3.6;
            printf("A velocidade em km/h eh %.2f\n", km);
            break;
        
        case 0:
            return 0;
            break;
        }
    }
}

/*

*/