#include <stdio.h>
#include "encrypt.h"

//gcc message_hider.c encrypt.c -o message_hider

int main(){
	char msg[80];
	while (fgets(msg,80,stdin)){
		encrypt(msg);
		printf("%s",msg);}
}