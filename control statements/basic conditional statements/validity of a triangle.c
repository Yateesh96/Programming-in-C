//validity of a triangle
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b))
	{
		printf("this triangle is valid");
	}
	else
	{
		printf("this triangle is invalid");
	}
}

