#include <stdio.h>

int main(){
    unsigned int n, d = 2;
    int p = 1;

    printf("<< Numeros primos >>\n");
    printf("Entre com o valor: ");
    scanf("%u", &n);

    if (n <= 1){
	    p = 0;
    }

    while (p == 1 && d <= n / 2) {
        if (n % d  == 0){
            p = 0;
        }
        d = d + 1;
    }

    if (p == 1){
	    printf("%d eh primo \n", n);
    }else{
	    printf(" %d nao eh primo \n", n);
    }

    return 0;
}

/*

*/