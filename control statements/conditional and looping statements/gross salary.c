//Gross salary
#include<stdio.h>
int main()
{
	float bs,gs,hra,da;
	printf("enter the basic salary: ");
	scanf("%f",&bs);
	if(bs<=10000)
	{
		hra=0.2*bs;
		da=0.8*bs;
		gs=bs+hra+da;
		printf("gross salary is %f",gs);
	}
	else if(bs<=20000)
	{
		hra=0.25*bs;
		da=0.9*bs;
		gs=bs+hra+da;
		printf("gross salary is %f",gs);
	}
	else
	{
		hra=0.3*bs;
		da=0.95*bs;
		gs=bs+hra+da;
		printf("gross salary is %f",gs);
	}
}
