#include<stdio.h>
#include<math.h>
int main()
{
  int l,w,h;
  float d,a;
  printf("Enter the length");
  scanf("%d",&l);
  printf("\nEnter the width");
  scanf("%d",&w);
  printf("\nEnter the height");
  scanf("%d",&h);
  a=sqrt ((l*l)+(w*w));
  d=a+h;
  printf("\nThe Shortest distance is %.2f",d);
  return 0;
}
