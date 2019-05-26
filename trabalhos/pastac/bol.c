#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool par_impar ( int num1 ){

	bool t = true ;
	if (num1%2 == 1){
	
	t = false ;
	
	}
	return t ;

}



int main (){
int num;
bool a;
printf("informe um valor :\n");
scanf("%i",&num);

a = par_impar(num);
if ( a == true){
	printf("o numero %i é par",num );


}

else {
	printf("O numero %i é impar! ",num);

}


return(0);
}
