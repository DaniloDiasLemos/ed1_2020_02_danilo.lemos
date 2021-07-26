#include <stdio.h>
#include <math.h>

int main(){
    int vet[5], x = 1;
    float m = 0, dp = 0;
    printf("<< Media e desvio-padrao >>\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Entre com a nota do aluno %d: ", x);
        x = x + 1;
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        m = m + vet[i];
    }
    m = m/5;
    for (int i = 0; i < 5; i++)
    {
        dp = dp + pow(vet[i] - m,2);
    } 
    dp = sqrt(dp/(5-1));

    printf("A media eh %.2f e o desvio-padrao eh %.2f", m, dp);

    return 0;
}

/*
Calcular a média e o desvio padrão amostral de 5 números informados pelo usuário.
obs: desvio-padrão (amostral, normalizado por N-1)

Exemplo de saída:
<< Media e desvio-padrao >>
Digite o valor 1: 50
Digite o valor 2: 60
Digite o valor 3: 70
Digite o valor 4: 80
Digite o valor 5: 60
A media eh 64 e o desvio-padrao eh 11.40
*/
