#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*void livre(int ***m,int n){
for(int i = 0 ; i < n ; i++){
free(m[i]);
}
free(m);
}

void aloca(int ***m, int n){
int i ;
m =(int**)calloc(n,sizeof(int*));
for(i = 0 ; i < 0 ; i++){
m[i] = (int*)calloc(n,sizeof(int));
matriz(m,n);

}



}
*/
void matriz ( int **m, int n){
int i ; 

for ( i = 0 ; i < n ; i++){
for ( int j = 0 ; j < n ; j++){

	m[i][j] = rand()%100;
}
imprime(m,n);

}}


void upper (int **m , int n){
int i,j;

for ( i = 0 ; i < n ; i++){
	for(j=0;j<n;j++){
	if ( i < j ){
	m[i][j] = 0;	
	}
imprime(m,n);

}}
}
void lower (int **m , int n){
int i,j;

for ( i = 0 ; i < n ; i++){
        for(j=0;j<n;j++){
        if ( i > j );
	m[i][j] = 0;
        }
imprime(m,n);

}}

void iden (int **m , int n){
int i, j;
for ( i = 0 ; i < n ; i++){
        for(j=0;j<n;j++){
	if ( i != j ){
	m[i][j] = 0 ;
	}
imprime(m,n);
}
}}


void imprime (int **m, int n){
for(int i=0; i<n ; i++){
for(int j=0; j<n ;j++){
	printf("%d\t",m[i][j]);
}
	printf("\n");
}
}




int main(){
int i , j ;
int **m,**o;
int n;
	scanf("%d",&n);
	m =(int**)calloc(n,sizeof(int*));
	for(i = 0 ; i < 0 ; i++){
		m[i] = (int*)calloc(n,sizeof(int));
		}
	o =(int**)calloc(n,sizeof(int*));
	for(i = 0 ; i < 0 ; i++){
	o[i] = (int*)calloc(n,sizeof(int));
		}



	//aloca(m,n);
	//aloca(o,n);
	matriz(m,n);
	matriz(o,n);
	upper(m,n);
	upper(o,n);
	iden(m,n);
	iden(o,n);
	lower(m,n);
	lower(o,n);

	for(int i = 0 ; i < n ; i++){
		free(m[i]);
	}
	free(m);
	

	for(int i = 0 ; i < n ; i++){
		free(o[i]);
	}
		free(o);
	


return(0);
}
