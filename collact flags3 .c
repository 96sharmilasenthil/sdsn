#include<stdio.h>
int main()
{
  int x ;
  scanf("%d",&x);
  if((x%2==0)||(x%3==0))
    printf("yes");
  else
    printf("no");
  return 0;
}
