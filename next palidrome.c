#include<stdio.h>
int main()
{
    int n,i,rev=0,t,r;
    scanf("%d",&n);
    i=n+1;
    while(1)
    {
        rev=0;
        t=i;
        while(t>0)
        {
            r=t%10;
            rev=(rev*10)+r;
            t=t/10;
        }
        if(rev==i)
        {
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}
