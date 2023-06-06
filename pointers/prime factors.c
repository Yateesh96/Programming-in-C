#include<stdio.h>
void factor(int*);
void isprime(int*);
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	printf("prime factors are:\n");
	factor(&num);
}
void factor(int *n)
{
	int i;
	for(i=1;i<*n;i++)
	{
		if(*n%i==0)
			isprime(&i);
	}
}
void isprime(int *j)
{
	int k,count=0;
	for(k=1;k<*j;k++)
	{
		if(*j%k==0)
			count++;
	}
	if(count==1)
		printf("%d\t",*j);
}
