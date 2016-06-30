#include<stdio.h>
int main()
{
  int x1,x2,y1,y2;
  float x,y;
  printf("\nEnter x1");
  scanf("%d",&x1);
  printf("\nEnter y1");
  scanf("%d",&y1);
  printf("\nEnter x2");
  scanf("%d",&x2);
  printf("\nEnter y2");
  scanf("%d",&y2);
  x=(x1+x2)/2.0;
  y=(y1+y2)/2.0;
  printf("\nResort is located at (%.1f , %.1f)",x,y);
  return 0;
}
