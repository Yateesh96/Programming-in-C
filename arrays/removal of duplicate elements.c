//Removal of duplicate elements from an array
#include<stdio.h>
int main()
{
	int a[60],n,i,j,t,k;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	k=n;
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				for(t=j;t<n-1;t++)
				{
					a[t]=a[t+1];
				}
				n--;
			}
		}
	}
	if(n<k)
	printf("\n%d duplicates found\nArray after removal of duplicates is:\n",k-n);
	else
	printf("\nNo duplicate element found\nThe array is: \n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
