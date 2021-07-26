#include <stdio.h>
#include <math.h>

int main() {

  float a,b,c,x1,x2,d;

  printf("<< Equacao de segundo grau >>\n");
  
  printf("Digite o valor de a: ");
  scanf("%f", &a);
  
  printf("Digite o valor de b: ");
  scanf("%f", &b);
  
  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if (a == 0) {
    if (b != 0) {  
      x1 = -c/b;
      printf("A equacao eh de primeiro grau e a raiz eh: %.2f\n", x1);
    }
    else {
      if (c == 0) {
	printf("0 = 0!\n");
      }
      else {
	printf("Voce cometeu uma contradicao\n");
      }
    }
  }
  else {
    
    d = b*b - 4*a*c;

    if (d < 0) {
      printf("Nao existe solucao real\n");
    }
    else {
      x1 = (-b + sqrt(d))/(2*a);
      x2 = (-b - sqrt(d))/(2*a);

      if (fabs(d) < 1.0e-10) {
	printf("Existe uma raiz %.2f de multiplicidade 2\n", x1);
      }
      else {
	printf("As raizes sao %.2f e %.2f\n", x1, x2);
      }
    }
  }
  
  return(0);
}