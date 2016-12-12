#include<stdio.h>
int main()
{
    int s=1,i,n;
    double k=2;
    scanf("%d",&n);
    printf("%d ",s);
    for(i=1;i<n;i++)
    {
        printf("%.1f ",k);
        if(i%2==0)
        {
            s=s*3;
            k=k+s;
        }
        else if(i%2==1)
        {
            k=k+s;
        }
    }
    return 0;
}
