#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        j=0;
        while(j<n)
        {
            printf("*");
        }
        j++;
    }
    printf("\n");
    i++;
return 0;
}
