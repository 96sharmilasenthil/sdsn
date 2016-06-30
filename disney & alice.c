#include<stdio.h>
int main()
{
  int a,b;
  printf("\nThe bird said :");
  scanf("%d",&a);
  b=(a%10)+(a/10);
  printf("\nPatrick and Johnny must go in path-%d to find Alice",b);
  return 0;
}
