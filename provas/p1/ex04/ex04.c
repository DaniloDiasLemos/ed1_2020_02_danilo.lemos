#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    int x;
    int y;
};
struct circulo {
    struct ponto p;
    int raio;
};

int main(){
    
   // Ex04: Um círculo pode ser definido com duas informações
   // - um ponto central; que é sua coordenada x,y no espaço cartesiano
   // - um raio; que é a distância da borda ao centro

   // Crie uma estrura Circulo. Para isso, crie uma estrutura chamada Ponto, que armazenará as
   // coordenadas reais (x,y) de um ponto. Em seguida, crie uma estrutura chamada Circulo,
   // que define o círculo, isto é, armazena um ponto e um raio.
   
   // No programa principal crie uma variável para definir um círculo e a partir dessa variável
   // mostre a área e a distância do centro do círculo até a origem. 
   // fórmulas:
   // area = 3,14*r*r
   // distancia d = sqtr(x*x + y*y)
   struct circulo c;
   float area, distancia;

   c.raio = 2;
   c.p.x = 3;
   c.p.y = 5;

   area = 3.14 * (c.raio * c.raio);
   distancia = sqrt((c.p.x * c.p.x) + (c.p.y * c.p.y));

   printf("Circulo: Centro(%d,%d); Raio %d; Area: %.2f; Distancia: %.2f", c.p.x, c.p.y, c.raio, area, distancia);
   
   // Exemplo de saída: Circulo: Centro (3,5); Raio 2; Área: 12.56; Distancia: 5.0


    return 0;
}