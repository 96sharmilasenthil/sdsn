#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the maximum number of times\n");
  scanf("%d",&a);
  printf("Enter the number of games played\n");
  scanf("%d",&b);
  if(b<a)
        {
          printf("IN");
        }
    else
        {
          printf("OUT");
        }
  return 0;
        }
