//Odd numbers and their sum
#include<stdio.h>
int main()
{
	int a=1,i,n,sum=0;
	printf("enter the n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=a;
		printf("%d,",a);
		a+=2;
	}
	printf("\nSum of first %d odd numbers = %d",n,sum);
}
