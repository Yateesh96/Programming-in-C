#include<stdio.h>
int main()
{
	char y;
	printf("enter the character");
	scanf(" %c",&y);
	if(((y>=65)&&(y<=90))||((y>=97)&&(y<=122)))
	{
		printf("the character %c is an alphabet",y);
	}
	else
	{
		printf("the character %c is not an alphabet",y);
	}
	
}
