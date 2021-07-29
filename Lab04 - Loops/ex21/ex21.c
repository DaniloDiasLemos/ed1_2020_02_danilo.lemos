#include <stdio.h>

int main(){

    int n = 10, fat, j, i = 1;

    printf("<< Fatorial >>\n");

    for (i = 1; i <= n; i++)
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

*/