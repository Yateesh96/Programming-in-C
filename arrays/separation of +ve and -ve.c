#include<stdio.h>
int main()
{
	int a[20],i,n;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	printf("positive numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("%d\t",a[i]);
		}
	}
	printf("\nnegative numbers are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d\t",a[i]);
		}
	}
}
