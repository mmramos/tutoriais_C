#include <stdio.h>
#include <string.h>

// gcc strstr.c -o strstr && ./strstr

int main(){

char a[] = "dysfunctional";
printf(" a = %s\n",a);
if (strstr(a,"fun")){
//if (strstr(a,"lol")){ // <- nao tem lol, nao printa
puts("tem fun");
}


return 0;}