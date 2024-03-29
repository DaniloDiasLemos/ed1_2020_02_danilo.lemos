#include <stdio.h>
#include <math.h>

int main() {
    float x = 0;
    float y = 0;
    float d = 0;

    printf("<< Distancia >>\n");
    printf("Entre com a coordenada x: ");
    scanf("%f", &x);
    printf("Entre com a coordenada y: ");
    scanf("%f", &y);
    d=sqrt(((x*x)+(y*y)));
    printf("A distancia entre os pontos (%.2f,%.2f) e (0,0) eh %.2f", x, y, d);

    return 0;
}

/*
=> Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distância da origem (0,0).  
Obs: faça #include <math.h> e use a função sqrt() para calcular a raiz de um número

-------------------------------------------------------------------------------
Exemplo de saída:

<< Distancia >>
Entre com a coordenada x: 3
Entre com a coordenada y: 4
A distancia entre os pontos (3,4) e (0,0) eh 5.0
-------------------------------------------------------------------------------
*/