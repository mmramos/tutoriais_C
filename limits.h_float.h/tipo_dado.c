#include <stdio.h>
#include <limits.h>
#include <float.h>

//gcc bus_bill_tax.c -o run && ./run

int main(){
	printf("O valor de INT_MAX é %i\n", INT_MAX);
	printf("O valor de INT_MIN é %i\n", INT_MIN);
	printf("Um int toma %d bytes\n", sizeof(int));
	
	printf("O valor de FLT_MAX é %f\n",FLT_MAX);
	printf("O valor de FLT_MIN é %.50f\n",FLT_MIN);
	printf("Um float toma %d bytes\n", sizeof(float));
	
	printf("O valor de CHAR_MAX é %i\n", CHAR_MAX);
	printf("O valor de CHAR_MIN é %i\n", CHAR_MIN);
	printf("Um char toma %d bytes\n", sizeof(char));
	
	printf("O valor de DBL_MAX é %f\n",DBL_MAX);
	printf("O valor de DBL_MIN é %.50f\n",DBL_MIN);
	printf("Um double toma %d bytes\n", sizeof(double));
	
	printf("O valor de SHRT_MAX é %i\n", SHRT_MAX);
	printf("O valor de SHRT_MIN é %i\n", SHRT_MIN);
	printf("Um short toma %d bytes\n", sizeof(short));
	
	printf("O valor de LONG_MAX é %lf\n",LONG_MAX);
	printf("O valor de LONG_MIN é %lf\n",LONG_MIN);
	printf("Um long toma %d bytes\n", sizeof(long));
return 0;}