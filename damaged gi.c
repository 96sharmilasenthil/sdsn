#include<stdio.h>
int main()
{
  char x;
  scanf("%c",&x);
  if(x>='A'&&x<='Z')
    printf("upper case");
  else if(x>='a'&&x<='z')
    printf("lower case");
  else
    printf("damaged");
    return 0;
}
