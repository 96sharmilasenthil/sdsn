#include<stdio.h>
int main()
{
  char n[100],s[100],e[100];
  printf("Enter Details :");
  printf("\nEnter Flight Name :");
  scanf("%s",n);
  printf("\nEnter Starting Location :");
  scanf("%s",s);
  printf("\nEnter Ending Location :");
  scanf("%s",e);
  printf("\nTravel Details :");
  printf("\nThe flight %s starts from %s and reaches %s.",n,s,e);
  return 0;
}
