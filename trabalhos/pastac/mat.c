#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main () {
int **M = NULL;
int n,i;
int *V = NULL;
//int *pont = NULL , *pont1 = NULL , *pont2 = NULL;
scanf("%d",&n);

FILE*pont;
FILE*pont1;
FILE*pont2;
	pont = fopen("/home/luiz/saida1.txt","w+");
	pont1 = fopen("saida2.txt","w+");
	pont2 = fopen("saida3.txt","w+");
M = calloc(n,sizeof(int*));

//M = malloc(n*sizeof(int*));
for(int i = 0 ; i < n ; i++){
M[i] = calloc(n,sizeof(int));
}

V = calloc(n,sizeof(int*));
int d;
d = 2*n;
V = realloc (V,d * sizeof(int));

//printf("%ld\n",sizeof((*M)));
/*for ( i = 0 ; i < n ; i++){
printf("%ld\n",sizeof(M(i)));
		}
*/
//printf("%ld\n",sizeof(V));
for(i = 0 ; i < n ; i++){
	for(int j = 0 ; j < n ; j++) {
	
		M[i][j] = rand()%100 ;
		printf("%d\t",M[i][j]);
		fprintf(pont,"%d\t",M[i][j]);
	}
	printf("\n");
	fprintf(pont,"\n");
}

for(i = 0 ; i < n ; i ++){

V[i] = rand()%100;
printf("%d\t",V[i]);
fprintf(pont1,"%d\t",V[i]);
}

for(i = n ; i < d ; i++){

V[i] = rand()%n;
printf("%d\t",V[i]);
fprintf(pont2,"%d\t",V[i]);
}

fclose(pont);
fclose(pont1);
fclose(pont2);

for(i = 0 ; i < n ; i++){

free(M[i]);

}
free(M);
V = NULL;
M = NULL ;
pont = NULL ;
pont1 = NULL;
pont2 = NULL;
return(0);
}
