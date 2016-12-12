#include<stdio.h>
int main()
{
    int n,a=0,b=1,f=a+b;
    scanf("%d",&n);
    if(a==n||b==n)
    {
        printf("yes");
    }
    else
    {
        while(f<n)
        {
            a=b;
            b=f;
            f=a+b;
        }
        if(f==n)
        printf("yes");
        else
        printf("no");
    }
    return 0;
}
