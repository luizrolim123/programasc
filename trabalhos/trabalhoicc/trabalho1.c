#include<stdio.h>  /*biblioteca padrão de entrada e saída.
			*/
#include<stdlib.h>
#include<math.h>  /*caso você vá compilar esse arquivo com gcc use o comando
			-lm para reconhecer os parametros da biblioteca math.h
			já que o linux não reconhece essa biblioteca.
			caso você esteja usando um outro tipo de compilador, co
			mo o codeblocks ou algum respectivo ignore esse comentá
			rio.
			*/	
int main() {
float X[10000],x[10000]; /* preferi usar locação estatica nesse programa,
			    já que ainda não foi apresentado o conceito de 
			    ponteiros para prograna, e também por que o con
			    ceito de locação dinamica ( malloc / calloc) são
			    conceitos muito interessantes embora ainda um pouco	
			    complicados para mim, e demandem um domínio e entend
			    imento maior sobre ponteiro. Embora eu ache que a p 		            roposta do programa foi elaborado pensando no uso de			    locação estática. 
			    eu preferi colocar um valor muito grande nos vetores
			    como 10000 para que o programa possa rodar qualquer
			    valor menor sem nenhum problema.

			   */
int i;   //variaveis inteiras para o contador do laço for
int n;
int k;

//leitura do numero de vetores no seu programa
scanf("%d",&n);
for(i=0 ; i < n ; i++){
//leitura de vetores de entrada do programa
scanf("%f",&x[i]);

}
for ( k = 0 ; k < n ; k++){/*primeiro laço para ler o valor de k do programa
			     para cara interação de k o laço de baixo ira ro
			     dar uma interação para todos os i's, assim como
			     se pede a transformada.
	*/
for ( i = 0 ; i < n ; i++){  /*para cada valor de k haverá uma interação de	
			       i seguido por uma somatória da respectiva tran
			       sformada
				*/   
X[k] += x[i]*cos(M_PI*(i + 0.5)*k/n);
}
printf("%f\n",X[k]);
//aqui imprimo o valor de cada vetor X[k] pra cada interação do meu laço for.
}
return(0);
//termino meu programa.
}
