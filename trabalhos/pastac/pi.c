#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
  double x, y;              // Coordenadas do dardo.
  double d;                 // Distância do dardo ao centro.
  unsigned int dentro = 0;  // Número de dardos dentro do círculo.
  unsigned int dardos = 0;  // Número total de dados lançados.
  int i; 

  srand(time(NULL));        // Inicialização do gerador de n. aleatórios.
 
  printf("Introduza numero de dardos a lancar: ");
  scanf("%d", &dardos);
 
  for (i = dardos; i > 0 ; i--) {
    x = rand(); // (double)RAND_MAX; 
    y = rand(); //(double)RAND_MAX;
    d = sqrt(x*x + y*y);
    if (d <= 1) {
       dentro++;
    }
  }
 
  printf("Valor estimado de PI: %lf\n", 4 * dentro / (double)dardos);

  return 0;
}
 

