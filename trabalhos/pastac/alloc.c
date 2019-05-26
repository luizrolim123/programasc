#include<stdio.h>
#include<stdlib.h>

int ** allocateTwoDimenArrayOnHeapUsingNew(int row, int col)
{
	int ** ptr = new int*[row];
	for(int i = 0; i < row; i++)
	{
		ptr[i] = new int[col];
	}
	return ptr;
}


void destroy(int ** ptr, int n)
{
	for(int i = 0; i < n; i++)
	{
		delete [] ptr[i];
	}
	delete [] ptr;
}
int main () {


int row = 2;
int col = 3;
int ** ptr = alloc(row, col);
int ** v   =
destroy(ptr,n)	




return(0);
}
