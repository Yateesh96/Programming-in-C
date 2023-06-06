//insertion of an element in 1D array
#include<stdio.h>
int main()
{
	int a[30],i,n,pos,elt;
	int *p;
	p=&a[0];
	printf("enter the number of elements of array:");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("enter the element to insert:");
	scanf("%d",&elt);
	printf("enter the position to insert:");
	scanf("%d",&pos);
	if(pos<n)
	{
		for(i=n-1;i>=pos-1;i--)
		{
			*(p+(i+1))=*(p+i);
		}
		*(p+(pos-1))=elt;
		n=n+1;
		printf("\nResultant array after insertion is:\n");
		for(i=0;i<n;i++)
			printf("%d\t",*(p+i));
	}
	else
		printf("\nposition value exceeds the array length!\ninsertion not possible");
}
