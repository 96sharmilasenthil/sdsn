#include<stdio.h>
int main()
{
    int a=1,b=3,c=4,i=3,n,d;
    scanf("%d",&n);
    printf("%d %d %d ",a,b,c);
    while(i<n)
    {
        d=a+b+c;
        printf("%d ",d);
        a=b;
        b=c;
        c=d;
        i=i+1;
    }
    return 0;
}
