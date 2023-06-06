//function to calculate parking charges
#include<stdio.h>
int pkcharges(char type,int hr)
{
    int charges;
    switch(type)
    {
        case 'c':
        charges=10*hr;
        break;
        case 'b':
        charges=20*hr;
        break;
        case 't':
        charges=5*hr;
        break;
        default:
        printf("invalid vehicle");
    }
    return charges;
}
int main()
{
    char ch;
    int h;int fee;
    printf("c-car\tb-bus\tt-two wheelers\nenter the vehicle type: ");
    scanf(" %c",&ch);
    printf("enter number of parking hours: ");
    scanf("%d",&h);
    fee=pkcharges(ch,h);
    printf("charges= Rs.%d",fee);
}
