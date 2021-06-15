#include <stdio.h>
// this one receives an integrer number of minutes and transforms it into hours, minutes

int minutes;
int hours;
int total;
int main(void){
 printf("Input an integrer amount of minutes please\n");
 scanf("%d", &minutes);

 hours = minutes/60;
 total= minutes % 60 ;

 printf("in hours minutes format this will be %d hours %d minutes", hours, total);


return 0;
}
