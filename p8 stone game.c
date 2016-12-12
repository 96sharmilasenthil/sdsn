#include<stdio.h>
#include<string.h>
int main()
{
    int i,s,n;
    scanf("%d",&n);
    scanf("%d",&i);
    scanf("%d",&s);
    {
    if(i<=n)
    {
    int a;
    scanf("%d",&a);
    i=i+1;
    s=s+(a/i);
    }
    if(s%2==0)
    {
      printf("BOB");
    }
    else 
     {
         printf("ALICE");
     } 
    }
      return 0;
}
