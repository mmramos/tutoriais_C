#include <stdio.h>
#include <string.h>

// gcc fgets.c -o fgets && ./fgets

int main(){

char search_for[80];
printf("Search for: ");
fgets(search_for, 80, stdin);
printf("Procura por: %s",search_for);

return 0;}