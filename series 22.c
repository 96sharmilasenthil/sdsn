#include<stdio.h>
int main()
{
   float a=95.0,c=20.5;
   int i=1,n;
   scanf("%d",&n);
   printf("%.1f ",a);
   while(i<n)
   {
       a=(a+c);
       printf("%.1f ",a);
       c=c+2.0;
       i++;
   }
   return 0;
}
