#include<stdio.h>
int main()
{
  int l,w,q;
  float c,cn;
  printf("\nEnter the length of the bed");
  scanf("%d",&l);
  printf("\nEnter the width of the bed");
  scanf("%d",&w);
  printf("\nEnter the cost per sqm (in dollars)");
  scanf("%f",&c);
  q=l*w;
  printf("\nThe quantity of cover needed is %dsqm",q);
  cn=((c*q)*100);
  printf("\nThe cost of the cover in cents is %.2f",cn);
  return 0;
}
