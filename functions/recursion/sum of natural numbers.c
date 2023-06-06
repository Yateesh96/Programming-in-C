//sum of natural numbers using recursion
#include<stdio.h>
int naturalsum(int n)
{
	if(n==1)
		return 1;
	else
		return(n+naturalsum(n-1));
}
int main()
{
	int n,sum;
	printf("enter number of terms: ");
	scanf("%d",&n);
	sum=naturalsum(n);
	printf("sum of first %d natural numbers= %d",n,sum);
}

