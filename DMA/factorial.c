//factorial calculation
#include<stdio.h>
#include<stdlib.h>
int factorial(int *num)
{
	int i;
	int fact;
	fact=1;
	for(i=*num;i>0;i--)
	{
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int *n,f;
	n=(int*)malloc(sizeof(int));
	//if memory cant be allocated
	if(n==NULL)
	{
		printf("error!memory not allocated");
		exit(0);
	}
	printf("enter n: ");
	scanf("%d",n);
	f=factorial(n);
	printf("the factorial of %d is %d",*n,f);
	free(n);
}
