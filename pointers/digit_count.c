//number of digits in a number
#include<stdio.h>
int main()
{
	int n,count;
	int *k;
	k=&n;
	printf("enter the number: ");
	scanf("%d",k);
	while(*k!=0)
	{
		*k=*k/10;
		count++;
	}
	printf("number of digits = %d",count);
}
