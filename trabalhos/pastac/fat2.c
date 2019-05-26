#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int n;
int k;
double f;
unsigned long long int fat;

printf("digite o numero fatorial\n");
scanf("%d",&n);



f = n/(2.718);
fat =sqrt(2*3.14*n)*pow(f,n);
printf("\n");
printf("%llu",fat);
printf("\n");

return(0);
}
