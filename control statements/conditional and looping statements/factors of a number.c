//Factors of a number
#include<stdio.h>
int main()
{
	int a,i=2;
	printf("enter the number: ");
	scanf("%d",&a);
	printf("the factors of %d are: ",a);
	do
	{
		if(a%i==0)
		{
		printf("%d,",i);
		}
		i++;
	}while(i<a);
}
