/*
 * gcc navigation.c -o navigation && ./navigation
 */

#include <stdio.h>


void va_sudeste(int* lat, int* lon){
	*lat = *lat-1;
	*lon = *lon+1;
}

int main(){
	int latitude = 32;
	int longitude = -64;
	va_sudeste(&latitude,&longitude);
	printf("Har! agora em: [%i, %i]\n", latitude, longitude);
	printf("msg occupies %i bytes\n", sizeof(msg));
	return 0;
}
