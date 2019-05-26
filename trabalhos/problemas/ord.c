#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

void ord(int num[], int tam) { 
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++) 
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min]) 
         min = j;
     }
     if (num[i] != num[min]) {
       aux = num[i];
       num[i] = num[min];
       num[min] = aux;
     }
  }
}

int main (){
int a;
int *v;
int i;
FILE *ptr = NULL;

ptr = fopen("file.txt","w");

scanf("%d",&a);
v = calloc(a,sizeof(int));

for(i = 0 ; i < a ; i++){
v[i] = 1 + rand()%100;
printf("%d \t",v[i]);
fprintf(ptr,"%d\t",v[i]);
}
printf("\n");
ord(v,a);
printf("\n");
printf("\n");
printf("\n");
printf("o novo valor será\n");
for(i = 0; i < a ; i++){
printf("%d \t",v[i]);
}
fprintf(ptr,"\n");
for( i = 0 ; i < a ; i++){	
fprintf(ptr,"%d\t",v[i]);
}
printf("\n");

fclose(ptr);
free(v);
v = NULL;
ptr = NULL ;
return(0);
}
