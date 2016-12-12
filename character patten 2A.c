#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    a=n/2;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        printf("*");
        printf("b",a);
        j=j+1;
    }
    printf("\n");
    return 0;
}
