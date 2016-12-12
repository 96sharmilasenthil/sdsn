#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char c;
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        c='A'+i;
        j=i;
        while(j<n)
        {
            printf("%c",c++);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
