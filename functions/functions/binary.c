//decimal to binary conversion using functions
#include<stdio.h>
int binary(int num)
{
	int rem,i=1;
	long long result=0;
	do
	{
		rem=num%2;
		num/=2;
		result=result+(rem*i);
		i=i*10;
	}while(num!=0);
	return result;
}
int main()
{
	int n;
	long long bin;
	printf("enter number: ");
	scanf("%d",&n);
	bin=binary(n);
	printf("the corresponding binary value of %d is %lld",n,bin);
}
