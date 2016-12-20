#include<stdio.h>
int main()
{
int i,b,p,tb;
printf("enter the base");
scanf("%d",&b);
tb=b;
printf("enter the power for the base");
scanf("%d",&p);
if(tb==0)
printf(" zero");
else if(p==0)
{
printf(" one");
}
else if(p==1)
{
printf(" the value is ",);
}
else
{
tb=b;
for(i=2;i<=p;i++)
{
b=b*tb;
}
}
return 0;
}
