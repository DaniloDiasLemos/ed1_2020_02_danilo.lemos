#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[3][3], mat2[3][3];
    int i,j;
    long int multiplicacao, resultado = 0;
    srand (time(NULL));

    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
        {
        //scanf("%d",&mat[i][j]);
        mat1[i][j] = (rand()/(double)RAND_MAX)*100;
        mat2[i][j] = (rand()/(double)RAND_MAX)*100;
        // printf("%d\n", mat1[i][j] ); 
        // printf("%d\n", mat2[i][j] ); 
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            multiplicacao = mat1[i][j] * mat2[i][j];
            resultado = resultado + multiplicacao;
        }
    }

    printf("A multiplicacao das matrizes: %ld", resultado);
    
    return 0;
}