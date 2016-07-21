#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,c,d,r1,r2,r3,r4,x,min,max;
  scanf("%d",&r1);
  scanf("%d",&r2);
  scanf("%d",&r3);
  scanf("%d",&r4);
  scanf("%d",&x);
  a=r1+r2+r3;
  b=r2+r3+r4;
  c=r1+r3+r4;
  
  min=a;
  max=0;
  if(min>b)
  {
    min=b;
  }
  if(min>c)
  {
    min=c;
  }
  if(min>d)
  {
    min=d;
  }
  if(max<a&&a<=x)
  {
    max=a;
  }
  if(max<b&&b<=x)
  {
    max=b;
  }
  if(max<c && c<=x)
  {
    max=c;
     }
  if(max<d && d<=x)
  {
    max=d;
  }
 printf("%d\n%d\n",min,max); 
   return 0;
}
