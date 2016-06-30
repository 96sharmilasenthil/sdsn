#include<stdio.h>
int main()
{
  int X1,X2,X3,Y1,Y2,Y3;
  float p,q;
  printf("X1");
  scanf("%d",&X1);
  printf("\nY1");
  scanf("%d",&Y1);
  printf("\nX2");
  scanf("%d",&X2);
  printf("\nY2");
  scanf("%d",&Y2);
  printf("\nX3");
  scanf("%d",&X3);
  printf("\nY3");
  scanf("%d",&Y3);
  p=(X1+X2+X3)/3.0;
  q=(Y1+Y2+Y3)/3.0;
  printf("\nDinesh's house is located at (%.1f,%.1f)",p,q);
  return 0;
}
