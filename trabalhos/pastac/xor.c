#include <stdio.h>
#include <stdlib.h>

int main(){
int a, b, c , d ;

scanf("%d %d %d %d",&a,&b,&c,&d);

if ( a == b && c == d ){
printf("é verdadeiro ou");



}

	else { printf("não é verdadeiro ou");
	}

printf("\n");
if ( a == b ^ c == d ) {
printf("é xor");
}


else {
printf("não é xor");

}

return(0);
}
