#include<stdio.h>
int main()
{
    int i,j,n;
    char c;
    scanf("%d",&n);
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        c='A';
        for(j=0;j<=i;j++)
        {
            printf("%c",c++);
        }
        printf("\n");
    }
    return 0;
}
