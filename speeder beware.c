#include<stdio.h>
int main()
{
  float a,b,c;
  float d,t,s;
  scanf("%f",&d);
  scanf("%f",&t);
  scanf("%f",&s);
  a=d/5280;
  b=t/3600;
  c=a/b;
  if(c>s)
    printf("Speeding");
  else
    printf("Not Speeding");
  return 0;
}
