#include <stdio.h>
// this will transform kilometers per hour to miles per hour

float kmp;
float mlp;
int main(void){
  printf("please introduce the kilometers per hour you want to convert\n");
  scanf("%f", &kmp);

  mlp= kmp*(.6213712/1);

  printf("in miles per hour this is %.4f", mlp);



return 0;
}
