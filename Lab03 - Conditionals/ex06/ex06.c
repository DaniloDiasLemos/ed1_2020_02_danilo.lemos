#include <stdio.h>
#include <math.h>

int main(){
    int n;
    float raiz;

    printf("<< Quadrado Perfeito >>\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    raiz = sqrt(n);
    if (raiz*raiz == n)
    {
        printf("O numero inteiro %d eh quadrado perfeito e sua raiz quadra eh %.0f", n, raiz);
    }else
    {
        printf("O numero inteiro %d nao eh quadrado perfeito", n);
    }

    return 0;
}