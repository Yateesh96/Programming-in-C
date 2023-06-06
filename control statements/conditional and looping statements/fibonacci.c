//Fibonacci sequence
#include<stdio.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("enter the n value: ");
	scanf("%d",&n);
	printf("fibonacci series: %d,%d,",a,b);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf("%d,",c);
		a=b;
		b=c;
	}
}
