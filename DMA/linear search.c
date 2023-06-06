//searching an element in an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,s,flag=0,*ptr;
	printf("enter the no. of elts: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	//if memory cant be allocated
	if(ptr==NULL)
	{
		printf("error!memory not allocated");
		exit(0);
	}
	printf("enter the array elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	printf("enter element to be searched: ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)==s)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("element found at position %d",i+1);
	else
		printf("element not found!");
	free(ptr);
}
