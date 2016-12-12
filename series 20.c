#include<stdio.h>
int main()
{
    int n,m=2,i=0;
    scanf("%d",&n);
    while(i<n)
    {
        m=m+(13*i);
        printf("%d ",m);
        i++;
    }
    return 0;
}
