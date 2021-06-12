#include <stdio.h>
#include <math.h>
//this one calculates the volume of a sphere
float r;
float r2; //this is the r elevated to the third potency
float pi;
float X; //this is the pie * 4/3
float volume;

int main(void){
  pi=3.14;

  printf("Enter the radio of the sphere\n");
  scanf("%f", &r);

  X= (pi*4/3); 
  r2= pow (r, 3); //pow is the comand for elevating a number to an exponent (number, esp)

  volume = X*r2;

  printf("The volume of the sphere with this radio is %.2f", volume);



return 0;
}
