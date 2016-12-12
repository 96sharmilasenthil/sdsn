#include<stdio.h>
int main()
{
    int n,i=0,j;
    scanf("%d",&n);
    while(i<n)
    {
        j=0;
        while(j<i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
