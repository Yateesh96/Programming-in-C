//odd or even using conditional statements
#include<stdio.h>
int main()
{
	int y;
	printf("enter the number");
	scanf("%d",&y);
	if((y%2)==0)
	{
		printf("\nthe number %d is even",y);
	}
	else
	{
		printf("\nthe number %d is odd",y);
	}
}
