#include<stdio.h>
int main()
{
  int a,b,c,d,e;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  scanf("%d",&e);
  if(a<b)
    printf("%d\n%d",b+d,a+b+d);
  else if(b>a)
  printf("%d",a+d);
  else
    printf("not");
  return 0;
}
