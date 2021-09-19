#include <stdio.h>
#include <stdlib.h>
//calcular o lucro (fazer a função antezs da main para calcular(func retorna valor da % e a classificacao int)->main que fala se é prejuizo)
// Função: Cálculo do lucro
// Crie um função que calcula qual foi o lucro (ou prejuízo) de uma venda
// A função recebe como entrada o preço de compra e o preço de venda
// Ela calcula e retorna o porcentual de lucro ou prejuízo obtido
//
// A função deve retornar um valor inteiro de acordo com a classificação listada na tabela abaixo.
// Valores inválidos correspondem a números negativos e zeros
// Todos os comandos de entrada e saída devem estar no programa principal
// Todos os cálculos devem ser feitos na função.

/*
+-------------------+-----------------------------------------------+----------------+
| Retorno da Função | Porcentual de lucro                           | Classificação  |
+-------------------+-----------------------------------------------+----------------+
| -1                | -                                             | Valor invalido |
+-------------------+-----------------------------------------------+----------------+
| 1                 | abaixo ou igual 0%                            | Prejuízo       |
+-------------------+-----------------------------------------------+----------------+
| 2                 | acima de 0% e menor ou igual a 20%            | Lucro pequeno  |
+-------------------+-----------------------------------------------+----------------+
| 3                 | acima de 20% e menor ou igual a 40%           | Lucro bom      |
+-------------------+-----------------------------------------------+----------------+
| 4                 | acima de 40%                                  | Lucro alto     |
+-------------------+-----------------------------------------------+----------------+

*/
// check:<<<erro: e3.1b: A função deve calcular e retornar por referência a porcentagem>>>>
// check:<<<erro: e3.2: Faltou testar os valores inválidos dentro da função / teste errado / faltou alguns testes>>>>
int calculalucro(float c, float v) {
   float lucro;
   int class, margem;

   lucro = v - c;
// check:<<<erro: e3.3: Cálculo com erros (não corresponde a porcentagem pedida OU erro na fórmula OU porcentagem baseada na venda e não na compra OU divisão inteira )>>>>
   margem = (lucro/c) * 100;
   if (margem < 0 || margem == 0)// check:<<<comentário:  "<=" ?? >>>>
   {
       return 1;
   }
   if (margem > 0 && margem < 20)
   {
       return 2;
   }
   if (margem > 20 && margem < 40)
   {
       return 3;
   }
   if (margem > 40)
   {
       return 4;
   }
    // check:<<<comentário: e3.4: o último teste é desnecessário E/OU alguns testes no IF são desnecessários>>>>   
   
}

int main(){

   // Ex03: utilizando a função de cálculo de lucro, leia o preço de compra e venda
   // e mostre o percentual de lucro ou prejuízo e a classificação de acordo com
   // a tabela acima. 
   float compra, venda;
   int indice;

   printf("Digite o preco de compra: ");
   scanf("%f", &compra);

   printf("Digite o preco de venda: ");
   scanf("%f", &venda);

   indice = calculalucro(compra, venda);
// check:<<<erro: e3.5a: Não mostrou a porcentagem>>>>
// check:<<<erro: e3.6: e3.6: Chamada de função com erros (parâmetro de entrada e/ou saída) ou faltando a passagem por referência>>>>
// check:<<<erro: e3.6a: Chamou a função mais de uma vez para o mesmo parâmetro / fez o cálculo da porcentagem no main>>>>
// check:<<<erro: e3.7: testes com IF inválidos / não testou caso de erro corretamente / não testou valores inteiros no IF>>>>

   switch (indice)
   {
   case 1:
       printf("Preco de compra: %.2f; Preco de venda:%.2f; Prejuizo", compra, venda);
       break;
   
   case 2:
       printf("Preco de compra: %.2f; Preco de venda:%.2f; Lucro pequeno", compra, venda);
       break;
   
   case 3:
       printf("Preco de compra: %.2f; Preco de venda:%.2f; Lucro bom", compra, venda);
       break;
   
   case 4:
       printf("Preco de compra: %.2f; Preco de venda:%.2f; Lucro alto", compra, venda);
       break;
   }
   
   // exemplo de saída:
   // Preço de compra: 10; Preco de venda:11; Lucro Pequeno de 10%
   // Preço de compra: 10; Preco de venda: 9; Prejuízo de 10%
  
    return 0;
}