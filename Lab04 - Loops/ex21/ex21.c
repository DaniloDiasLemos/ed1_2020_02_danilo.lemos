#include <stdio.h>

int main(){

    int n = 10, fat, i = 1;

    printf("<< Fatorial >>\n");

    while (i < n)
    {
        for(fat = 1; n > 1; n--)
        {      
            fat = fat * n;
            printf("%d! = %d\n", i, fat);
            i++;
        }
    }

    return 0;
}

/*

*/