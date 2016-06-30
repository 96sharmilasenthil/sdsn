# include <stdio.h>
int main()
{
  char f[50];
  float a,b;
  printf("Enter event :");
  scanf("%s",f);
  printf("\nEnter Start Time :");
  scanf("%f",&a);
  printf("\nEnter End Time :");
  scanf("%f",&b);
  printf("\n%s : %.2f AM to %.2f PM",f,a,b);
  return 0;
}
