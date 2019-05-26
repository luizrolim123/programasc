#include <stdio.h>
#include <stdlib.h>
void gera(int v[], int n){
for (int i = 0 ; i < n +1 ; i++){
	v[i] = rand()%n ;
	printf("%d\t",v[i]);

}
}

int buscalinear(int v[],int n, int x){

for (int i = 0 ; i < n +1 ; i++)
{
      	if (v[i] == x){
      return(i);
	}
//     	 else{
//		 return(-1);
      
  //    }
     // return(-1);


}

}

int main () {
int v[100];
int n ;
int x;
int resultado;
scanf("%d",&n);
scanf("%d",&x);

gera(v,n);
resultado = buscalinear(v,n,x);
if(resultado != -1){
printf("%d",v[resultado]);
}
else{
printf("não existe ça porra");
}

return(0);
}
