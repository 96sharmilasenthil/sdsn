#include<stdio.h>
int main()
{
  int r,a,b=1,c=0;
  printf("Enter the number\n");
  scanf("%d",&r);
  while(r>0)
  {
    a=r%10;
    if(a>(9-a))
    {
      a=9-a;
    }
    c=c+(a*b);
      b=b*10;
      r=r/10;
    }
    printf("The minimum possible positive number is %d",c);
    return 0;
  }
