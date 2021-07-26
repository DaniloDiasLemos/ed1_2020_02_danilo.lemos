#include <stdio.h>

int main(){
    float j = 50000, c = 25000, jp = 800, cp = 3000;
    int anos = 0;

    while (j > c)
    {
        j = j + (jp*12);
        c = c + (cp*12);
        anos += 1;
    }

    printf("Levaria %d anos para que Carlos fique com mais dinheiro que Jose", anos);
    

    return 0;
}

/*

*/