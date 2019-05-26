#include <stdio.h>
#include <stdlib.h>

int main () {


	int i , j,n;
	int **m = NULL ;
	scanf("%d",&n);
	m = malloc(n*sizeof(int*));
	for ( i = 0 ; i < n ; i++){
	m[i] = malloc(n*sizeof(int));
	
	}


	for ( i = 0 ; i < n ; i ++ ){
		for ( j = 0 ; j < n ; j ++){
		m[i][j] =1 +  rand()%10;
	
	}
	}

	for ( i = 0 ; i < n ; i ++ ){
        for ( j = 0 ; j < n ; j ++){
		printf("%d\t",m[i][j]);
		
        }
	printf("\n");
	}	
		printf("\n \n");	
		if ( n%2 == 0 ) {


	for ( i = 0 ; i < n ; i ++ ){
	for ( j = 0 ; j < n ; j ++ ){
	
		printf("%d\t",m[i][j+2]);
	}
			printf("\n");
		}
			}
	else {
	        for ( i = 0 ; i < n ; i ++ ){
        for ( j = 0 ; j < n ; j ++ ){

                printf("%d\t",m[i][j+3]);
        }            if (( (j + 3 >= n) ||( i >= n)) ^ ( j + 3 != i) ) {
	
			printf("vazio");
	}
                        printf("\n");
                }
                        }

	
	
	
	

	   for ( i = 0 ; i < n ; i ++ ){
		free(m[i]);	
	}
	   free(m);
	return(0);

}


