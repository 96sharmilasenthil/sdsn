#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        if(b%2==0)
        {
            printf("%d ",(b*b)-2);
        }
        else if(b%2==1)
        {
            printf("%d ",(b*b)-1);
        }
    }
    return 0;
}                                                                 
