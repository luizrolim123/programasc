#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

xor ( bool A, bool B);


   A ^ B ; 

int main(){

bool A ;
bool B ;
scanf("%d",&A);
scanf("%d",&B);
xor(A,B);
printf("%d", xor(A,B));
return(0);
}
