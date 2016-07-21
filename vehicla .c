#include<stdio.h>
int main()
{
  int n1,n2,n3,n4,b;
  scanf("%d",&n1);
  scanf("%d",&n2);
  scanf("%d",&n3);
  scanf("%d",&n4);
  scanf("%d",&b);
   if(b<n1)
    printf("B1");
    else if(b<(n1+n2))
    printf("B2");
  else if(b<(n1+n2+n3))
    printf("B3");
  else if(b<(n1+n2+n3+n4))
    printf("B4");
    else
    printf("EXT");
 return 0;
    }
