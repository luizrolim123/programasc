#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //permite o uso de variaveis booleanas (true or false)
#include <string.h>  // manipulação de strings

typedef struct {
	char titulo[100];
	char editora[100];
	int ano;
	bool estado;
	int ISBN;
	char ResultadoTitulo[100];

}Livro;

Livro livro[100];

void imprimelivro( Livro *livro,int i){
		printf("\n");
                printf("O título é:%s\n",livro[i].titulo);
                printf("A editora é :%s\n",livro[i].editora);
                printf("O ano é :%d \n",livro[i].ano);
                printf("O ISBN do livro é:%d \n",livro[i].ISBN);
                        if(livro[i].estado == true){
                                printf("Esse livro está disponível para empréstimo\n");
                        }
                        else {
                                printf("Esse livro está emprestado\n");
                        }   //função para imprimir uma struct de livros
}
//procura linearmente pelo ISBN do livro
void procuraISBN (Livro *livro,int tamanho,int codigo){ //codigo == numero do ISBN do livro
	int i ;

	for ( i = 0 ; i < tamanho   ; i++){
		if (livro[i].ISBN == codigo){
			imprimelivro(livro,i);			
		}
	}
	
}
//procura linearmente pelo titulo do livro
int procuratituloemprestimo (Livro *l, int tamanho, char* Title){ //função para procurar o titulo de um livro especificamente apenas
																	//para devolução ou emprestimo.
	int i;
		for (i=0; i < tamanho  ; i++){
			if (strcmp(l[i].titulo,Title)==0)   //usar a função strcmp para comparar uma string, função nova que eu não conhecia em c
			{	 	
				return i;
			}
	
	    	  
		}

	}

void procuratitulo(Livro *l, int tamanho, char* Title){
	for(int i=0 ; i < tamanho +1 ; i++){
		if(strcmp(l[i].titulo,Title)==0){   //função strcmp  (string comp ) da biblioteca string.h compara duas strings
			imprimelivro(livro,i);
			}
		}
	}

void menu (){

	printf("\n");
	printf("=============================================\n");
	printf("BIBLIOTECA CAASO\n");
	printf("=============================================\n");
	printf("1. Cadastrar um livro\n2. Buscar um livro no acervo.\n3. Imprimir lista de livros cadastrados\n4. Fazer empréstimo\n5. Devolução \n0. Sair\n");
	printf("Escolha uma opção: ");

	printf("\n\n");
	
	//// 
}

void registrador(Livro *livro, int i ){
	int ISBN;
	int codigo;
					printf("Digite o título do livro:\n");
					scanf("%s",livro[i].titulo);
					printf("Digite a editora do livro:\n");
					scanf("%s",livro[i].editora);
					printf("digire o ano de publicação:\n");
					scanf("%d",&livro[i].ano);
					printf("digite o ISBN do livro:\n");
					scanf("%d",&livro[i].ISBN);

					livro[i].estado = true;	//função para registrar um novo livro no acervo da biblioteca
											// avariavel booleana true indica que ele esta disponivel para o empréstimo

} 

void menubusca(Livro *livro,int registro ){    //função para gerar um menu de busca
printf("\n");
                                        printf("=============================================\n");
                                        printf("BIBLIOTECA CAASO\n");
                                        printf("=============================================\n");
                                        printf("1. Buscar pelo ISBN\n2. Buscar pelo título.\n");
                                        printf("Escolha uma opção: ");

                                        printf("\n\n");
int ISBNI, Busca;
char Titulo[100];
					scanf("%d",&Busca);

					switch(Busca){
					
						
					
					
						case 1:	//Busca pelo ISBN do livro			
						    
							printf("Digite o ISBN do seu livro\n");
							scanf("%d",&ISBNI);
							getchar();
							procuraISBN(livro,registro,ISBNI);
							getchar();

							break;
						case 2:  //busca pelo titulo do livro
							
							printf("Digite o título do seu livro\n");
                                    scanf("%s",Titulo);
                                    procuratitulo(livro,registro,Titulo);
	         				 break;
	
						}


}

void livroemprestado (Livro *livro, int registro){
	char Titulo[100];
	int NomeEmprestimo;
						
						printf("Digite o nome do livro que deseja pegar emprestado\n");
						scanf("%s",Titulo);
							NomeEmprestimo =procuratituloemprestimo(livro,registro,Titulo);
								if (livro[NomeEmprestimo].estado == false){
									printf("Esse livro já esta emprestado\n");
										getchar();
                                		// 						
						}
								else {
									livro[NomeEmprestimo].estado = false;
									printf("Seu livro acaba de ser retirado para empréstimo.\nObrigado por fazer uso da nossa biblioteca. Volte Sempre!\n");
										getchar();
                                        // 
						}
												
}

void livrodevolucao (Livro *livro, int registro){
	char Titulo[100];
	int ResultadoTitulo;					
					printf("Digite o nome do livro que deseja devolver\n");
					scanf("%s",&*Titulo);
					ResultadoTitulo=procuratituloemprestimo(livro,registro,Titulo);
						livro[ResultadoTitulo].estado = true;
					printf("Obrigado por devolver o livro.\nVolte sempre!\n");



	}
void catalogo(Livro *livro, int registro){
				for ( int i = 0 ; i < registro ; i++){
		 				 imprimelivro(livro,i);
									}
		}

int main (){

	int valor;
	int i;
	int registro = 0;   //contador de livros zerado
                       valor = 10;
		while (valor != 0){
			menu();
			scanf("%d",&valor);
			getchar();
			// 

       			 switch(valor){

				case 1:                // Registrar um livro
					registrador(livro,registro); //chama a função void que grava em uma struct as informações do livro
					getchar();
					// 
				break;


				case 2:                 // Buscar um livro no acervo
       				menubusca(livro,registro);
       				getchar();	//Gera um menu com as opções de procurar um livro pelo titulo ou ISBN	  
       				// 
				break;
				case 3:  // imprimir uma lista de livros catalogados
	 				catalogo(livro,registro);
	 				 	  	
		 			getchar();
				    // 	
				break;

				case 4: // fazer emprestimo de um livro
					livroemprestado(livro,registro);
					getchar();
					// 						
				break;
		
				case 5:  // Devolução
					livrodevolucao(livro,registro);
					getchar();
					// 

				break;

				}

			if(valor ==1){
				registro++;  //contador para estipular o numero de livros no acervo da biblioteca
				}
				}



	return(0);
}
