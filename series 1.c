#include<stdio.h>
int main()
{
  float a=0.5,n,i;
  scanf("%f",&n);
  for(i=1;i<=n;i++)
  {
      printf("% .1f",a);
      a=a*3;
  }
  return 0;
}
