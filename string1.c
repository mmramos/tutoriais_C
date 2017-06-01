#include <stdio.h>
#include <string.h>

// gcc string1.c -o run && ./run

char tracks[][80] = {
"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};

void find_track(char search[]){
	int i;for (i = 0; i < 5; i++){
		if (strstr(tracks[i],search))
		printf("Track %i: %s \n", i, tracks[i]);
		//else {puts("-");} posta no else
}}

int main(){
int i;for (i = 0; i < 5; i++) {
	printf("Track %i: '%s'\n",i,tracks[i]);}

char search_for[80];
char input[80];
printf("Search for? \n: ");
//fgets(search_for, 80, stdin);
scanf("%s", input);

//int len;len = strlen(c); // pega o tamanho
// char find[len];
// strcpy(find,search_for); // Copia search_for em find

printf("Search for: %s \n",input);
find_track(input);

return 0;}