#include <stdio.h>


int main(void){ 
//area and perimeter of a rectangle
int area,   perimeter,  width,   height;
width = 3;
height = 5;

perimeter = (width*2)+(height*2);
area = width*height;


printf ("the area of a rectangle of 3 by 5 inches is %.2d and the perimeter is %.2d inches", area, perimeter);


//for this program to work with a width=6.8 and height=2.3 inches, yo need to use float
//float area,   perimeter,  width,   height;
//and for the decimals to show you use %.2f
 return 0;

  }
