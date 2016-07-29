#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20],c[20],d[20];
  scanf("%s\n%s\n%s\n%s\n",a,b,c,d);
  if(a[0]==d[0]||b[0]==d[0]||c[0]==d[0])
    printf("yes\n");
    else
      printf("no\n");
    return 0;
}
