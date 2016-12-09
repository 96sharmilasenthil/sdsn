#include<stdio.h>
int main()
{
  int j,r,s=0,i;
  printf("Enter the card picked up by Patrick:\n");
  scanf("%d",&j);
  for(i=j;i>0;)
  {
    r=j%10;
    j=j/10;
    s=s+r;
    i=j;
  }
  printf("The credit points is %d",s);
  return 0;
  }
