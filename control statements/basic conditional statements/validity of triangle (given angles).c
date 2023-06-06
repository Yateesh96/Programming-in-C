#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the angles");
	scanf("%d%d%d",&a,&b,&c);
	d=a+b+c;
	if(d==180)
	{
		printf("the triangle is valid");
	}
	else
	{
		printf("the triangle is invalid");
	}
}
