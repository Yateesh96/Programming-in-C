//to find whether an year is leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	if(((year%400)==0)||(((year%4)==0)&&((year%100)!=0)))
	{
       printf("the year %d is a leap year",year);
    }
    else
    {
    	printf("the year %d is not a leap year",year);
    }
}

