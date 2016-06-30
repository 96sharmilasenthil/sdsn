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
  if(rn<=c||rn%c==1||rn%c==0)
    printf("yes");
  else
    printf("no");
  return 0;
}
