#include<stdio.h>
int main()
{
  int n,s,t,i,a=0,di=10,left,right;
  printf("Enter the card number picked up by Patrick:\n");
  scanf("%d",&n);
  s=n*n;
  t=n;
  while(t!=0)
  {
    t=t/10;
    a++;
  }
  for(i=1;i<a;i++)
  {
    di=di*10;
  }
  right=s%di;
  left=s/di;
  if(left+right==n)
  {
    printf("%d is a Kaprekar Number",n);
  }
  else
   {
    printf("%d is  not a Kaprekar Number",n);
  }  
  return 0;
}
