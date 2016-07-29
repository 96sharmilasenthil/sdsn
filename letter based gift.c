#include<stdio.h>
#include<string.h>
int main()
{
  char a[20],b[20],c[20];
  char d;
  scanf("%s\n",a);
  scanf("%s\n",b);
  scanf("%s\n",c);
  scanf("%c\n",&d);
if(a[0]==d||b[0]==d||c[0]==d)
    printf("yes\n");
    else
      printf("no\n");
  return 0;
}
