#include<stdio.h>
void dosorting(int b[],int m)
{
	int i,j,t;
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
}
int removal(int c[],int q)
{
	int i,j,flag=0;
	for(i=0;i<q-1;i++)
	{
		if(c[i]==c[i+1])
		{
			flag=1;
			for(j=i;j<q-1;j++)
			{
				c[j]=c[j+1];
			}
		}
	}
	return flag;
}
int main()
{
	int a[50],i,n,k;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	dosorting(a,n);
	printf("sorted array is: \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	k=removal(a,n);
	if(k==1)
	{
		printf("\narray after removal of duplicate elements: \n");
		for(i=0;i<n-1;i++)
		printf("%d\t",a[i]);
	}
	else
	{
		printf("\nno duplicate element found in the array");
	}
}
