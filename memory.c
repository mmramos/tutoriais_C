/*
 * gcc memory.c -o memory && ./memory
 */

int y = 1;

#include<stdio.h>

int main(){
int x = 4;

printf("x esta armazenado em %p \n", &x);
printf("y esta armazenado em %p \n", &y);

int *endereco_de_x = &x; /*variavel com o valor do ponteiro*/

return 0;
}