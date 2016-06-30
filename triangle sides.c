#include<stdio.h>
#include<math.h>
int main()
{
  int x1,x2,x3,y1,y2,y3;
  float ab,bc,ac;
  printf("\nx-coordinate of vertex A");
  scanf("%d",&x1);
  printf("\ny-coordinate of vertex A");
  scanf("%d",&y1);
  printf("\nx-coordinate of vertex B");
   scanf("%d",&x2);
  printf("\ny-coordinate of vertex B");
  scanf("%d",&y2);
  printf("\nx-coordinate of vertex C");
  scanf("%d",&x3);
  printf("\ny-coordinate of vertex C");
  scanf("%d",&y3);
  ab=sqrt (((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
  printf("\nLength of side AB is %.1f",ab);
  bc=sqrt (((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
  printf("\nLength of side BC is %.1f",bc);
  ac=sqrt (((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
  printf("\nLength of side AC is %.1f",ac);
  return 0;
}
