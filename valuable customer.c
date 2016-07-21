#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,c;
  int d1,d2;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  d1=((a+b+c)*20)/100;
  if(a<b && a<c)
  {
      d2=a;
  }
  else if(b<c)
  {
      d2=b;
  }
  else
  {
      d2=c;
  }
  if(d1<d2)
    {
        printf("FREE ITEM\n");
    }
  else
  {
    printf("DISCOUNT\n");
    }
  return 0;
}
