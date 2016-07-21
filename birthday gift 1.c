#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x;
  char a[10];
  scanf("%s",a);
  x=abs(a[0]-a[1]);
        if(x==1)
        printf("yes");
        else
        printf("no");
        return 0;
        }
