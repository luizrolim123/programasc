#include <stdio.h>
#include <stdlib.h>
void imprime2(float a){

printf("%f\n",a);

}
void imprime (int n,unsigned long int v[]){

printf("%lu\n",v[n]);

}
int main (){
int i ;
unsigned long int *x = NULL;
int n ;
scanf("%d",&n);
x = malloc (n* sizeof(int));
x[0] = 1 ;
x[1] = 1 ;
printf("para x");
for(i = 2 ; i < n +1 ; i ++){
x[i] = x[i-1] + x[i-2] ;
//imprime(i,x);
}



printf("os valores são \n");
imprime(n,x);
printf("\n");


float d,e,f ;
int a ;
a = n-1;
d = x[n];
e = x[n-1];
f = d/e ;
imprime2(d);
imprime2(e);
imprime2(f);

x = NULL;
free(x);
return(0);

}
