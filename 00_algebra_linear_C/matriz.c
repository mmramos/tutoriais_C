#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stdmario.h"

//--------------------------------------//

int main(){
	
	//int i,j;
	int n;
	n = 3;
	float a[n][n];
	float det;
	float ia[n][n];
	//float r[row][col];
	
	/*for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			a[i][j] = i*2;
			}}*/
	
	a[0][0] = 1;
	a[0][1] = 2;
	a[0][2] = 3;
	//----------
	a[1][0] = 0;
	a[1][1] = 1;
	a[1][2] = 5;
	//----------
	a[2][0] = 5;
	a[2][1] = 6;
	a[2][2] = 0;
	
	puts("matriz a =\n");
	mprint(n,n,a);
	
	det = mdet_subedi(n,a);
	printf("determinante de a é: %f\n",det);
	
	minv_subedi(n,a,ia);
	puts("\n \n matriz inversa é =\n");
	mprint(n,n,ia);
	
}
