#include<stdio.h>
int main()
{
  int xl,yl,x,y,l;
  printf("\nEnter the x-coordinate of the left bottom vertex");
  scanf("%d",&xl);
  printf("\nEnter the y-coordinate of the left bottom vertex");
  scanf("%d",&yl);
  printf("\nEnter the length of a side");
  scanf("%d",&l);
  x=xl+(l/2);
  y=yl+(l/2);
  printf("\nThe centre of the room is at (%d,%d)",x,y);
  return 0;
}
