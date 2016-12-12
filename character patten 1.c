#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            while(i+j<=n)
            {
            printf("b");
            }
            printf("*");
        }
        j=j+1;
        printf("\n");
        i=i+1;
    }
return 0;    
}
