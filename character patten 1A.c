#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        { 
            
            for(i=0,j=0;i+j<=n;i++,j++)
            {
            printf("b");
            }
            {
            printf("*");
            }
            j=j+1;
        }
        printf("\n");
    }
    printf("\n");
    i=i+1;
    return 0;
}
