#include <stdio.h>

int main(){
    int N = 0, i = 0, qte = 1, num = 1;

    printf("<< Triangulo de Floyd >>\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    if(N < 1){
	    return 0;
    }

	while(i < N)
	{
		for(int j = 0; j < qte; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
		qte++;
		i++;
	}

    return 0;
}

/*

*/