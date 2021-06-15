#include <stdio.h>

//this one ask for hours and minutes and transforms the hours into minutes and add it to the other minute and prints the result
char time[100];
float minutes;
float hours;
float total;
int main(void){
  printf("Enter the hours and minutes please\n");

  fgets(time, sizeof (time), stdin);
  sscanf(time, "%f %f", &hours, &minutes);

    total= (hours*60) + minutes;

  printf("The total in minute is %.0f", total);



return 0;
}
