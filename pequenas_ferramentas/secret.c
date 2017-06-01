#include <stdio.h>

// gcc secret.c -o run && ./run < secret.txt > message1.txt 2> message2.txt

int main()
{
char word[10];
int i = 0;
while (scanf("%9s", word) == 1) {i = i + 1;
if (i % 2)
	fprintf(stdout, "%s, %i, \n,",word,i);
else
	fprintf(stderr, "%s, %i, \n", word,i);}
return 0;}