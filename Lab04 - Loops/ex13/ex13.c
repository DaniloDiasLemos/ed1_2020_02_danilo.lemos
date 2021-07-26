#include <stdio.h>

int main(){
    unsigned int n, i, j;
    int mult = 1;
    int cont = 1;

    printf("<< Multiplos >>\n");
    printf("Entre com o valor de n: ");
    scanf("%u", &n);
    printf("Entre com o valor de i: ");
    scanf("%u", &i);
    printf("Entre com o valor de j: ");
    scanf("%u", &j);

    printf("Os multiplos de i ou j sao: 0");
    while (cont < n)
    {
      if (mult%i == 0 || mult%j == 0)
	{
	    printf(",%d", mult);
        cont = cont + 1;
	}
      mult = mult + 1; 
    }
    
    return 0;
}

/*

*/