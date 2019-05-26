#include <stdio.h>
#include <stdlib.h>
int Get_Radius(int R);
int Get_Length(int L);
float ACIRCLE(int R,float A);
float ASQUARE(int L,float B);
int main(){
    int R,L;
    float A,Area,SArea,B;
    R=Get_Radius(R);
    L=Get_Length(L);
    Area=ACIRCLE(R,A);
    SArea=ASQUARE(L,B);

    system("pause");
    return 0;
}


int Get_Radius(int R)
{
    printf("Input the Radius of a circle:\n");
    scanf("%d",&R);
    return R;
}
int Get_Length(int L)
{
    printf("Input the Length of the square:\n");
    scanf("%d",&L);
    return L;
}

float ACIRCLE(int R,float A) 
{
    R=Get_Radius(R);
    A=R*R*3.14;
    return A;
}
float ASQUARE(int L,float B)
{
    L=Get_Length(L);
    B=L*L;
    return B;
}
