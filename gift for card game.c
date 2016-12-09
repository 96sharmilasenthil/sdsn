#include<stdio.h>
int main()
{
  int cn,dc,md,t;
  scanf("%d",&cn);
  dc=0;
  t=cn;
  for(t=cn;t>0;t++)
  {
      dc++;
      t=t/10;
  }
  if(dc!=0)
  {
  printf("Patrick lost the gift\n");
  }
  else
  {
      cn=cn/10;
      md=cn%10;
  }
  if(md%3==0)
  {
  printf("Patrick won the gift\n");
  }
  else
  {
  printf("Patrick lost the gift\n");
  }
  return 0;
}
