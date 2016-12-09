#include<stdio.h>
int main()
{
  int card,i,sum=0;
  printf("Enter the cards picked up by Patrick:\n");
  scanf("%d",&card);
  while(card!=999)
  {
    i=2;
    while(i<card)
    {
      if(card%i==0)
        break;
      i++;
    }
    if(i==card)
    {
      sum=sum+i;
    }
    scanf("%d",&card);
  }
    printf("The credit points is %d",sum);
    return 0;
  }
