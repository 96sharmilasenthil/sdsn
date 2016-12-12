#include<stdio.h>
int main()
{
    int p,s=4,b;
    scanf("%d",&p);
    printf("%d ",s);
    for(b=1;b<p;b++)
    {
        s=s+b*b;
        printf("%d ",s);
    }
    return 0;
    }
