#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter x\n");
  scanf("%d",&a);
  printf("Enter y\n");
  scanf("%d",&b);
  printf("Enter z\n");
  scanf("%d",&c);
  if((a<b)&&(a<c))
    printf("L1 has the minimal seating capacity");
  else if(b<c)
    printf("L2 has the minimal seating capacity");
  else
    printf("L3 has the minimal seating capacity");
 return 0;
}
