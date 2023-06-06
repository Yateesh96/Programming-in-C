// Types of triangles
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the lengths of sides: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b>c)&&(b+c>a)&&(c+a>b))
	{
		printf("the triangle is valid\n");
		if(a==b)
		{
			if(a==c)
			{
				printf("This is an equilateral triangle");
			}
			else
			{
				printf("This is an isosceles triangle");
			}
		}
		else if((a==c)||(b==c))
		{
			printf("This is an isosceles triangle");
		}
		else
		{	
			printf("This is a scalene triangle");
		}
	}
	else
	{
		printf("this triangle is invalid");
	}
}
