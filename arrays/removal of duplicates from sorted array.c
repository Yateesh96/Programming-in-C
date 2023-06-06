//removal of duplicates from a sorted array
#include<stdio.h>
int removal(int c[],int q)
{
	int i,j;
	for(i=0;i<q-1;i++)
	{
		if(c[i]==c[i+1])
		{
			for(j=i;j<q-1;j++)
			{
				c[j]=c[j+1];
			}
			q--;
		}
	}
	return q;
}
int main()
{
	int a[50],i,n,k;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("enter the elements in ascending order: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	k=removal(a,n);
	if(k<n)
	printf("\n%d duplicates found\nArray after removal of duplicates is:\n",n-k);
	else
	printf("\nNo duplicate element found\nThe array is: \n");
	for(i=0;i<k;i++)
	printf("%d\t",a[i]);
}
