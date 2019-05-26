#include <stdio.h>
#include <stdlib.h>


int main(){
int a;
scanf("%d",&a);
printf("\nO numero A é %d\n",a);
printf("digite outro valor");
while( a != 3){
printf("\ndigite um novo valor para a\n");
scanf("%d",&a);

}
printf("O valor de A será %d",a);
getchar();




return(0);
}
