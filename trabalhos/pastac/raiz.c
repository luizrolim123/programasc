#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void espaco (int k) {
for (int i = 0 ; i < 2 ; i ++){
	printf("\n");
}
}

int main (){
int i, n ;
int m;
int *v= NULL ;
int *q = NULL;
printf("digite o valor do vetor");
scanf("%d",&m);

printf("digite o numero de repetições");

scanf("%d",&n);
v = malloc(n*sizeof(int));
q = malloc(n*sizeof(int));


double s ;
for ( i = 0 ; i < n ; i ++){


	s +=1/m ;
printf("%lf\t",s);
}

printf("\n");
 long double p ;

p = pow(m,s);
 
printf("%Lf\t",p);


free(v);
q = NULL ;
return(0);
}
