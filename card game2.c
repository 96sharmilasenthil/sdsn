#include<stdio.h>
int main()
{
  int n,i,b;
  printf("Enter the card number typed by Johnny:\n");
  scanf("%d",&b);
  n=b;
  for(i=0;n>0;n/=10)
  {
    i=i*10;
    i=i+(n%10);
  }
  printf("The reverse order of %d is %d.",b,i);
  return 0;
}
