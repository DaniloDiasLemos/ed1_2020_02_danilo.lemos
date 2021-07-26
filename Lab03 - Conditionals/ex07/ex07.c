#include <stdio.h>

int main(){
    float l1,l2,l3;

    printf("<< Tipo de triangulo >>\n");
    printf("Digite o 1o lado do triangulo: ");
    scanf("%f", &l1);
    printf("Digite o 2o lado do triangulo: ");
    scanf("%f", &l2);
    printf("Digite o 3o lado do triangulo: ");
    scanf("%f", &l3);
    if (l1 < 0 || l2 < 0 || l3 < 0)
    {
        printf("Digite apenas numeros positivos");
        return 0;
    }
    if ((l1+l2) < l3 || (l1+l3) < l2 || (l2+l3) < l1)
    {
        printf("Nao eh possivel formar um triangulo");
        return 0;
    }
    if ((l1*l1) == ((l2*l2)+(l3*l3)))
    {
        printf("O tipo do triangulo eh: Triangulo retangulo");
    }
    if ((l1*l1) > ((l2*l2)+(l3*l3)))
    {
        printf("O tipo do triangulo eh: Triangulo obtusangulo");
    }
    if ((l1*l1) < ((l2*l2)+(l3*l3)))
    {
        printf("O tipo do triangulo eh: Triangulo acutangulo");
    }

    return 0;
}