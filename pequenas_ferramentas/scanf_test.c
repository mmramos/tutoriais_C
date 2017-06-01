#include <stdio.h>

// gcc scanf_test.c -o run && ./run

int main(){
int a;
float latitude;
float longitude;
float height;
float num;

//char info[80];
//int started = 0;

puts ("data=[");
//scanf("%f,%f,%f,%f",&latitude,&longitude,&height,&num);
a = scanf("%f,%f,%f,%f",&latitude,&longitude,&height,&num);
printf("%i",a);

printf("{latitude: %f, longitude: %f, altura: %f, numero: %f}",latitude,longitude,height,num);
puts ("\n");
return 0;}