#include<stdio.h>
int main()
{
    int i=2,f=1,num;
    scanf("%d",&num);
    while(f<num)
    {
        f=f*i;
        i=i+1;
    }
    if(f==num)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
