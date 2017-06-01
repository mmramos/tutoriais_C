#include <stdio.h>

//gcc tipo_dado.c -o run && ./run

float total = 0.0;
short count = 0;
short tax_percent = 6;

float add_with_tax (float f){
	float tax_rate = 1 + tax_percent / 100.0;
	total = total + (f * tax_rate);
	count = count + 1;
	return total;}
	
int main(){
	float val;
	printf("preço do item: ");
	while (scanf("%f", &val) == 1){
		printf("Total so far: %.2f \n", add_with_tax(val));
		printf("Preço do Item: ");}
	printf("\n Final total: %.2f\n", total);
	printf("numero de itens: %hi \n", count);
	return 0;}