#include<stdio.h>
int main()
{
  int r,c,rn;
  printf("Enter the number of rows\n");
  scanf("%d",&r);
  printf("Enter the number of columns\n");
  scanf("%d",&c);
  printf("Enter the roll number of the student\n");
  scanf("%d",&rn);
  if((rn<=r)||(rn%r==1)||((rn>(c*r-r))&&(rn<=(c*r))))
    printf("yes");
  else
    printf("no");
  return 0;
}
