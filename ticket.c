# include <stdio.h>
int main ()
{
  int a=1,e=2;
  float f1;
  char c[50],d[50];
  printf("Ticket 1 :");
   printf("\nEnter Ticket Number :");
  scanf("%d",&a);
   printf("\nEnter Name :");
  scanf("%s",c);
   printf("\nEnter Ticket Cost :" );
     scanf("%f",&f1);
   printf("\nTicket 2 :");
   printf("\nEnter Ticket Number :");
  scanf("%d",&e);
   printf("\nEnter Name :");
  scanf("%s",d);
   printf("\nEnter Ticket Cost :");
  scanf("%f",&f1);
   printf("\nTicket Details :");
   printf("\nTicket 1 :");
   printf("\nNumber : %d",a);
   printf("\nName : %s",c);
   printf("\nCost : %.2f",f1);
   printf("\nTicket 2 :");
   printf("\nNumber : %d",e);
   printf("\nName : %s",d);
   printf("\nCost : %.2f",f1);
  return 0;
}
