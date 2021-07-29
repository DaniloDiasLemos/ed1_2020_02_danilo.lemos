#include <stdio.h>

int main(){
    int n = 15, fat, j, i;

    printf("<< Fatorial >>\n");

    for (i = 11; i <= n; i++)
    {
        fat = 1;
        for (j = 1; j <= i; j++)
        {
            fat = fat * j;
        }
        printf("%d! = %d\n", i, fat);
    }

    return 0;
}

/*
 O erro ocorre pois o numero acima de 13! ultrapassa o limite do inteiro. A solução seria trocar de inteiro para float ou double.
*/