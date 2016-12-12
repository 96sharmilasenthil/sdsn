#include<stdio.h>
int main()
{
    int a,i,f;
    printf("Enter the number\n");
    scanf("%d",&a);
    f=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
         printf("%d is a prime number\n",a);
    else
         printf("%d is not a prime number\n",a);
         return 0;
}
