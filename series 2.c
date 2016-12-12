#include<stdio.h>
int main()
{
  int a=121,n,b=104,i;
  scanf("%d",&n);
  printf("%d ",a);
  for(i=1;i<n;i++)
  {
      a=a+b;
      b=b+32;
      printf("%d ",a);
  }
  return 0;
}
