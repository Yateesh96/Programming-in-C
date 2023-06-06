//Prime number verification
#include<stdio.h>
int main()
{
	int a,i=1,j=0;
	printf("enter the number: ");
	scanf("%d",&a);
	do
	{
		if(a%i==0)
			j++;
		i++;
	}while(i<a);
	if(j==1)
		printf("the number %d is a prime number",a);
	else
		printf("the number %d is a composite number",a);
}
