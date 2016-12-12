#include<stdio.h>
int main()
{
    int m,n,i=1,j;
    scanf("%d%d",&m,&n);
    while(i<=m)
    {
        j=1;
        while(j<=n)
        {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
