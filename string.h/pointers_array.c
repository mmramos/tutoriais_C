#include <stdio.h>
#include <string.h>

// gcc pointers_array.c -o run && ./run

int main(){

char *name_for_dog[]={
"Bowser",
"Bonza",
"Rex",
"Veneza",};

int i;for (i = 0; i < 4; i++){
printf(" %i - cao - %s \n", i, name_for_dog[i]);
}

return 0;}