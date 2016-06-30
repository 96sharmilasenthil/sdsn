#include<stdio.h>
#include<math.h>
int main()
{
  int a,b;
  char operator;
  scanf("%d\n",&a);
  scanf("%c\n",&operator);
   scanf("%d",&b);
  switch(operator)
  {
    case '+' :
  {  
  printf("The sum is %d",a+b);
   break;
  }
  case '-' :
  { 
  printf("The difference is %d",a-b);
   break;
  }
  case '*' :
  {
  printf("The product is %d",a*b);
    break;
  }
  case '/':
    {
  printf("The quotient is %d",a/b);
  break;
  }
  case '%':
    {
  printf("The remainder is %d",a%b);
  break;
  }
    {
  printf("Invalid input");
  }
  }
  return 0;
}
