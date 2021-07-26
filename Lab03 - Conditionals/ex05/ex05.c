#include <stdio.h>

int main(){
    float p, a, imc;

    printf("<< IMC >>\n");
    printf("Digite o seu peso: ");
    scanf("%f", &p);
    printf("Digite a sua altura: ");
    scanf("%f", &a);
    imc = p/(a*a);
    if (imc < 18.5)
    {
        printf("A classificacao do seu IMC: Magreza");
    }
    if (imc >= 18.5 && imc <= 24.9)
    {
        printf("A classificacao do seu IMC: Saudavel");
    }
    if (imc >= 25 && imc <= 29.9)
    {
        printf("A classificacao do seu IMC: Sobrepeso");
    }
    if (imc >= 30 && imc <= 34.9)
    {
        printf("A classificacao do seu IMC: Obesidade Grau I");
    }
    if (imc >= 36 && imc <= 39.9)
    {
        printf("A classificacao do seu IMC: Obesidade Grau II (severa)");
    }
    if (imc >= 40)
    {
        printf("A classificacao do seu IMC: Obesidade Grau III (morbida)");
    }

    return 0;
}