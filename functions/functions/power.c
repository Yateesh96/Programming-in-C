#include<stdio.h>
void power(int base,int exponent)
{
	int result=1,i;
	for(i=1;i<=exponent;i++)
	{
		result=result*base;
	}
	printf("power value= %d\n",result);
}
int main()
{
	int base,exp;
	printf("enter the base and exponent value:");
	scanf("%d%d",&base,&exp);
	power(base,exp);
}
