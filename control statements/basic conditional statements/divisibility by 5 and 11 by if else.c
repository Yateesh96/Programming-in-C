//divisibility by 5 and 11
#include<stdio.h>
int main()
{
	int y;
	printf("enter the value of y");
	scanf("%d",&y);
	if(((y%5)==0)&&((y%11)==0))
	{
		printf("the number %d is divisible by 5 and 11",y);
	}
	else
	{
		printf("the number %d is not divisible by 5 and 11",y);
	}
}
