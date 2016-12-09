#include<stdio.h>
int main()
{
  int a=0,b=0;
  printf("Enter the cards picked up by Patrick:\n");
  for(;b!=-999;)
  {
    a=a+b;
    scanf("%d",&b);
  }
  printf("The credit points is %d",a);
  return 0;
}
