#include<stdio.h>
int main()
{
    int a,k,l=12;
    scanf("%d",&a);
    printf("%d ",l);
    for(k=1;k<a;k++)
    {
        l=l*2+8;
        printf("%d ",l);
    }
    return 0;
}
