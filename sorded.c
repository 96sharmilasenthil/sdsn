#include<stdio.h>
#include<stdlib.h>
int main()
{
  int b,u,h,t;
  scanf("%d",&b);
  if(b>99 && b<1000)
  {
    u=b%10;
    b=b/10;
    t=b%10;
    h=b/10;
    if(u>=t && t>=h)
    {
      printf("yes\n");
    }
    else if (u<=t && t<=h)
    {
        printf("yes\n");
    }
    else
    {
      printf("no\n");
    }
  }
  else
  {
    printf("no\n");
  }
  return 0;
}
