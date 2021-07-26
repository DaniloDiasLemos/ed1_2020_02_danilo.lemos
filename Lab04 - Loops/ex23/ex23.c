#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j;
    float f, e = 1;

    printf("<< Numero neperiano >>\n");
    printf("Entre com o numero de termos: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        f = 1;
        for (j = 1; j <= i; j++)
        {
            f = f * j;
        }
        e = e + (1/f);
    }

    printf("e = %f\n", e);

    return 0;
}

/*

*/