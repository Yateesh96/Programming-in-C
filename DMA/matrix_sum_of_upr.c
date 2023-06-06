//sum of upper-triangular elements
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,sum=0,*ptr,j;
	printf("enter the order of matrix: ");
	scanf("%d",&n);
	ptr=(int*)calloc(n*n,sizeof(int));
	//if memory cant be allocated
	if(ptr==NULL)
	{
		printf("error!memory not allocated");
		exit(0);
	}
	printf("enter the matrix elements row by row:\n");
	for(i=0;i<n*n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(ptr+(i*n+j)));
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
			{
				sum=sum+*(ptr+(i*n+j));
			}
		}
	}
	printf("sum of elts above principal diagonal = %d",sum);
	free(ptr);
}
