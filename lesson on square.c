#include<stdio.h>
int main()
{
  int x,y,s;
  scanf("%d",&x);
  scanf("%d",&y);
  scanf("%d",&s);
  printf("\n%d,%d",(x+(s/2)),(y+(s/2)));
  printf("\n%d,%d",(x+(s/2)),(y-(s/2)));
  printf("\n%d,%d",(x-(s/2)),(y-(s/2)));
  printf("\n%d,%d",(x-(s/2)),(y+(s/2)));
  return 0;
}
