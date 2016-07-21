#include<stdio.h>
int main()
{
  int b,sa;
  printf("Enter the cost of travel by luxury bus\n");
  scanf("%d",&b);
  printf("Enter the cost of travel by share auto\n");
  scanf("%d",&sa);
  if(b>sa)
    printf("Minimal cost travel is by auto");
  else 
    printf("Minimal cost travel is by bus");
  return 0;
}
