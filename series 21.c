#include<stdio.h>
int main()
{
    int n,a=2,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        printf("%d ",a);
        a=(a*a)-1;
        i++;
    }
    return 0;
}
