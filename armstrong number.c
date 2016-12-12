#include<stdio.h>
int main()
{
    int t,n,ntemp,cubesum=0;
    scanf("%d",&n);
    ntemp=n;
    while(n>0)
    {
        t=n%10;
        cubesum=cubesum+(t*t*t);
        n=n/10;
    }
    if(cubesum==ntemp)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not An Armstrong Number");
    }
    return 0;
}
