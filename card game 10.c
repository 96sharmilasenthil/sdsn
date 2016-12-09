#include<stdio.h>
int main()
{
  int n,a=1,b=0,c=1,i=1;
  printf("Enter the card number picked up by Patrick:\n");
  scanf("%d",&n);
  printf("Patrick must pick and arrange cards in below order\n");
  while(i<=n)
  {
    c=a+b;
   a=b;
    b=c;
    printf("%d ",c);
    i=i+1;
  }
  return 0;
}
