#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
	bool Valor;


}Algo;

Algo algo;

typedef struct
{
	float Peso;
	int Idade;
	float Altura;
} Pessoa;
int busca (Pessoa *p, int x , int valor ){
	
	for(int i = 0 ; i < valor ; i ++){
	if (p[i].Idade == x ){
		return(i);
		
	}
	
	}
return -1;

}

Pessoa povo[10];
void gera (Pessoa *P,int i){
	P[i].Idade = 10 + rand()%50;
	P[i].Peso = 1 + rand()%60;
	P[i].Altura = 1+ rand()%2;
//	printf("%d \n %f\n %f\n",P[i].Idade,P[i].Peso,P[i].Altura);
}
void imprime (Pessoa *P,int i){

	printf("Idade : %d \n Peso : %f \n Altura : %f",P[i].Idade,P[i].Peso,P[i].Altura);
	printf("\n");
}

int main (){
int i;
for ( i = 0 ; i < 10 ; i ++){
gera(povo,i);
}
for ( i = 0 ; i < 10 ; i++){
imprime(povo,i);
}
getchar();
system("clear");
algo.Valor = true;

if ( algo.Valor == true){
printf("é real");
getchar();
system("clear");
}
int n;
printf("digite uma valor para a idade da pessoa\n");
scanf("%d",&n);
int r;
r= busca(povo,n,10);
if ( r == -1){
printf("Isso não existe ");

}
else{
imprime(povo,r);
}
return(0);
}
