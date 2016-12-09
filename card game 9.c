#include<stdio.h>
int main()
{
  int n,i=1,s=0;
  printf("Enter the card picked up by Johnny:\n");
  scanf("%d",&n);
  while(i<n)
  {
    if(n%i==0)
    s=s+i;
    i=i+1;
  }
   if(s==n)
    {
      printf("Johnny will win the Card Game");
    }
    else
    {
      printf("Johnny will not win the Card Game");
    }
    return 0;
}
