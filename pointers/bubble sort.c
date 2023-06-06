//sorting elements in ascending order using bubble sort
#include<stdio.h>
int main()
{
	int a[30],i,j,n,t;
	int *p;
	p=&a[0];
	printf("enter the number of elements of the array:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
		}
	}
	printf("Resultant array after sorting:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
}
