#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
typedef struct Porta {
	int num ;
	bool estado;
}Porta;

Porta *porta = NULL;
	

bool mudaestado(Porta *porta, int i){
	if(porta[i].estado == false){
		return true ;
	}
	else{
		return false;
	}
}

	int main(){
	int i, j ;
	int n, k;
	double total_time;
	clock_t  start, end;
	start = clock();
	//time count starts
	printf("digite o numero de portas do seu sistema \n \n");
	scanf("%d",&k);
	n = k + 2;
	porta = (Porta *)calloc((n+2),sizeof(Porta));
		
	for (i =0 ; i < n+1 ; i++){
		porta[i].num = i ;
		porta[i].estado = false;
	}

	for ( i = 0 ; i < n+2 ; i++)
	{	for ( j = 1 ; j < n+2 ; j++){

			if( (porta[j].num)%i == 0 ){
				porta[j].estado = mudaestado(porta,j);
				}

				  }
	}

	int contador1, contador2;
	contador1 = 0;
	contador2 = 0;
	
	for ( i = 1 ; i < n +2 ; i++){
		if(porta[i].estado == true){
		contador1++;
		}
	
	}
	for ( i = 1 ; i < n + 2 ; i++){
		if(porta[i].estado == false){
		contador2++;
		
		}
	
	}

	printf("O numero de portas abertas é  %d\n",contador1);
	printf("O numero de portas fechadas é %d\n",contador2);
	free(porta);
	end = clock();
	total_time = ((double) (end - start))/ CLOCKS_PER_SEC;
	printf("\n o tempo total gasto foi : %f",total_time);
	return(0);

}
