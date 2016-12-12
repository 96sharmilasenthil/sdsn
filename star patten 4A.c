#include<stdio.h>
int main()
{
    int i=1,j=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        i=j;
        while(j<=n)
        {
            printf("*");
            j=j+1;
        }
        printf("\n");
        j=i+1;
    }
    return 0;
}
