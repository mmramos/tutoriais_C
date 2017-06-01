#include <stdio.h>

int maisgrande(int a,int b){
if (a>b) return a;
return b;}

int main(){
int greatest = maisgrande(100,1000);
printf("%i e o mais grande!\n",maisgrande);
return 0;}