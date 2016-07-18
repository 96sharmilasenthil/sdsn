#include<stdio.h>
int main()
{
    int rc,rf,ac,af,ca;
    char cat;
    scanf("%c%d%d%d%d",&cat,&rc,&rf,&ac,&af);
    ca=((rc*rf)+(ac*af));
    switch(cat)
    {
        case 'A':
        printf("The fee to be paid is Rs.%d",ca);
        break;
        case 'B':
        printf("The fee to be paid is Rs.%d",ca+5000);
        break;
        case 'C':
        printf("The fee to be paid is Rs.%d",ca+1500);
        break;
        case 'D':
        printf("The fee to be paid is Rs.%d",ca+5000+1500);
        break;
        default:
        break;
    }
    return 0;
}
