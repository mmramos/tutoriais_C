
#include <stdio.h>

void biscoito_da_sorte (char msg[]){
	printf("mensagem lida: %s \n", msg);
	printf("msg occupies %i bytes\n", sizeof(msg));
}

void skip(char *msg){
	puts(msg+6);
}


int main(){
	char fala[] = "Biscoitos engordam voce";
	biscoito_da_sorte(fala);
	printf("The quote string is stored at: %p\n", fala);
	char s[]="Quao grande e isso?";
	char *t = s;
	printf("\ntamanho de s = %i\n",sizeof(s));
	printf("\ntamanho de t = %i\n",sizeof(t));

	char *msg_from_amy = "Don't call me";
	skip(msg_from_amy);
return 0;}