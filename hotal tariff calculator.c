#include<stdio.h>
int main()
{
  int a,b,c=0;
  float r,nc,sc;
  scanf("%d",&a);
  scanf("%f",&r);
  scanf("%d",&b);
  nc=r*b;
  sc=nc*120/100;
  if(((a==11)||(a==12))||(a==4)||(a==6))
    c=1;
  switch(c)
  {
    case 0:
    {printf("Hotel Tariff: Rs.%.2f",nc);
  break;
    }
 case 1:
    {
      printf("Hotel Tariff: Rs.%.2f",sc);
 break;
    }
      printf("Invalid output");
  }
  return 0;
}
