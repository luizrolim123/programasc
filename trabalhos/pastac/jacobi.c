#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void livrei ( double**m, int n ) {
for (int i = 0 ; i <n ; i++){

free(m[i]);

}
free(m);
}

void livre ( int **m, int n ) {


for (int i = 0 ; i <n ; i++){

free(m[i]);

}
free(m);
}
void alocai(double***m, int n){
    int i = 0;
    *m = (double**)malloc(sizeof(int *) * n);
    for(i = 0; i < n; i++){
        *(*m + i) = (double*)malloc(sizeof(int) * n);
    }
}

void aloca(int ***m, int n){
    int i = 0;
    *m = (int **)malloc(sizeof(int *) * n);
    for(i = 0; i < n; i++){
        *(*m + i) = (int *)malloc(sizeof(int) * n);
    }
}

    


void geravet ( double *v , int n ){
	int i;
  int *r = NULL ;
  r = malloc(n*sizeof(int));

  for ( i = 0 ; i < n ; i++){
  r[i] = 1 + rand()%10 ;
    }

  for ( i = 0 ; i < n ; i++){
  v[i] = r[i] ;
  
  }
  free(r);
}

void gerai ( double**m, int n){

for(int  i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

m[i][j] =1 +rand()%10;

}
}
}

void gera ( int **m, int n){

for(int  i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

m[i][j] =1 +rand()%10;

}
 



}
}

void imprime (int **m, int n ){ //imprime uma matriz de inteiros
for (int i = 0 ; i < n ; i++){

	for ( int j = 0 ; j < n ; j ++){
	
	}
}

}


void imprimei (double**m, int n ){ //imprime uma matriz de floats
for (int i = 0 ; i < n ; i++){

        for ( int j = 0 ; j < n ; j ++){

        }
 }

}

void imprimevet(double*v , int n ){ //imprime um vetor de floats
	for ( int i = 0 ; i < n ; i++){
	
	}
}


void  low( int **m ,int **l,int  n ){

for ( int i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

if ( j >= i ){
        m[i][j] = 0 ;
}
else{

l[i][j] = m[i][j] ;
}
}
}
}


void diagonal( int **m ,int **l,int n ){

for ( int i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

if ( i == j ){


        m[i][j] = l[i][j] ;
}


else{

	m[i][j] = 0;
}
}
}
}
void diagonali(int **m,double**l,int n ){
int i , j ;
	for ( i = 0 ; i < n ; i++){
	for( j = 0 ; j < n ; j++){
		if ( j != i){
		l[i][j] = 0 ;
		}
	}}
		
	for ( i = 0 ; i < n ; i ++){
		l[i][i] = pow(m[i][i],-1) ;
                  
	}
	  for ( i = 0 ; i < n ; i++){
        for( j = 0 ; j < n ; j++){
	printf("%lf\t",l[i][j]);
	
	}
		printf("\n");
	} 
	
	
}




void upper ( int **m ,int **l,int n ){

for ( int i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

if ( j <= i ){


	m[i][j] = 0 ;
}
else {

	m[i][j] = l[i][j] ;
}

}


}
//printf("sua matriz triangular superior será!:\n\n");
//imprime(m,n);
}
void iguala (int **m ,int **o,int n) {

for (int i = 0 ; i < n ; i++){
	for (int j = 0 ;j < n; j++ ){
	//m[i][j] = o[i][j];
	o[i][j] = m[i][j];	
	} 
}


}

void igualai (int **m ,double**o,int n) {

for (int i = 0 ; i < n ; i++){
        for (int j = 0 ;j < n; j++ ){
        //m[i][j] = o[i][j];
        o[i][j] = m[i][j];
        }
}

}

void algo ( double ** m , int n ){


        int i , j ;

        for ( i = 0 ; i < n ; i++){
                for ( j = 0 ; j < n ; j++){
                        printf("%lf\t",m[i][j]);

                }
        printf("\n");
        }


}
void multmat(float ** di, int ** u ,int ** l, int *v , int n )
{
float ** calloc


for ( int i = 0 ; i < n ; i++){
	for ( int j = 0 ; j < n ; j++){
	
	
	}}
	



}



}

int main () {
double**di = NULL , *v = NULL,*r = NULL  ;
int **m = NULL,**l = NULL, **u = NULL, **d =NULL ;
int n;
printf("digite o número de dimensões da sua matriz!\n");
scanf("%d",&n);

printf("\n");
v = malloc(n*sizeof(int));
r = malloc(n*sizeof(int));
//alocaveti(&v,n);  //aloca vetor de reais 
aloca(&d,n);
aloca(&u,n); //aloca as matrizes
aloca(&l,n);
aloca(&m,n);
alocai(&di,n);
gera(m,n);
geravet(v,n);
iguala(m,l,n);
iguala(m,d,n);
iguala(m,u,n);
diagonal(d,m,n);
igualai(d,di,n);
imprimei(di,n);
low(l,m,n);
upper(u,m,n);
diagonali(d,di,n);   // inversa da diagonal
imprimei(di,n);
algo(di,n);
//multmat(di,l,u,v,n);
/*Aqui futuramente pretendo colocar o método de jacobi para resolver matrizes, também tenho que criar uma função para gerar um vetor
aleatório.
*/

livre(l,n);
livre(d,n);
livre(u,n); //desaloca as matrizes
livre(m,n);
livrei(di,n);
free(v);
free(r);
return(0);
}



