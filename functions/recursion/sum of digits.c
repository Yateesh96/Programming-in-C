//sum of digits using recursion
#include<stdio.h>
int sumof(int n)
{
	if(n==0)
		return 0;
	else
		return(n%10+sumof(n/10));
}
int main()
{
	int num,sum;
	printf("enter the number: ");
	scanf("%d",&num);
	sum=sumof(num);
	printf("sum of digits of %d is %d",num,sum);
}

