#include<stdio.h>
int main()
{
  int c,d;
  float b,cr;
  printf("\nEnter cents :");
  scanf("%d",&c);
  printf("\nEnter taxi fare (in Dollars) :");
  scanf("%d",&d);
  cr=c/100.0;
  b=cr-d;
printf("\nBalance : $%.2f",b); 
  return 0;
}
