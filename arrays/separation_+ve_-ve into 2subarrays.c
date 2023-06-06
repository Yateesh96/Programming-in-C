//separation of positive and negative numbers into 2 sub-arrays
#include<stdio.h>
int main()
{
	int a[20],i,n,np=0,nn=0,positive[20],negative[20];
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			positive[np]=a[i];
			np++; /*number of positive numbers*/
		}
		if(a[i]<0)
		{
			negative[nn]=a[i];
			nn++; /*number of negative numbers*/
		}
	}
	printf("positive numbers are:\n");
	for(i=0;i<np;i++)
	{
		printf("%d\t",positive[i]);
	}
	printf("\nnegative numbers are:\n");
	for(i=0;i<nn;i++)
	{
		printf("%d\t",negative[i]);
	}
}
