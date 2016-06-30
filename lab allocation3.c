#include<stdio.h>
#include<string.h>
int main()
{
  int x,y,z;
  char l[20];
  printf("Enter x\n");
  scanf("%d",&x);
  printf("Enter y\n");
  scanf("%d",&y);
  printf("Enter z\n");
  scanf("%d",&z);
  printf("Enter the lab allocated for ACE training\n");
  scanf("%c%d",&l);
  if((l,"x")==0)
  {
    if(y<z)
    printf("L2 has the minimal seating capacity");
    else
      printf("L3 has the minimal seating capacity");
  }
  else if((l,"y")==0)
  {
    if(x>z)
    printf("L1 has the minimal seating capacity");
    else
      printf("L3 has the minimal seating capacity");
  }else if(x<y)
  printf("L1 has the minimal seating capacity");
    else
      printf("L2 has the minimalseating capacity");    
  return 0;
}
