#include<stdio.h>
int main()
{
    int n,sqsum=0,i=1;
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sqsum=sqsum+(i);
        }
        i++;
    }
    if(sqsum==n)
    {
        printf("Perfect number\n");
    }
    else
    {
        printf("Not a perfect number\n");
    }
    return 0;
}
