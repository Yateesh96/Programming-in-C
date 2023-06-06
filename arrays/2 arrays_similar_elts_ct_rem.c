#include<stdio.h>
void COUNT(int arr1[],int arr2[],int n)
{
	int ct=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr2[j]==arr1[i])
				ct++;
		}
	}
	printf("the total number of second array elements present in the first array = %d",ct);
}
int REMOVAL(int arr1[],int arr2[],int *n)
{
	int ct=0,p,i,j,k;
	for(i=0;i<*n;i++)
	{
		for(j=0;j<*n;j++)
		{
			if(arr2[j]==arr1[i])
			{
				p=i;
				ct++;
				for(k=p;k<*n;k++)
				{
					arr1[k]=arr1[k+1];
				}
				i--;
			}
		}
	}
	*n=(*n)-ct;
	return ct;
}
int main()
{
	int A[40],B[40];
	int i,N,x;
	char choice;
	printf("enter the number of elements: ");
	scanf("%d",&N);
	printf("input the elements of array A:\n");
	for(i=0;i<N;i++)
	{
		printf("A[%d]= ",i);
		scanf("%d",&A[i]);
	}
	printf("input the elements of array B:\n");
	for(i=0;i<N;i++)
	{
		printf("B[%d]= ",i);
		scanf("%d",&B[i]);
	}
	printf("enter the choice\na--to count\tb--to remove\n");
	scanf(" %c",&choice);
	switch(choice)
	{
		case 'a':
			COUNT(A,B,N);
			break;
		case 'b':
			x=REMOVAL(A,B,&N);
			if(x==0)
				printf("no common element of array B is found in array A");
			else
			{
				printf("%d Common elements found\n",x);
				printf("Array A after removal of Array B elements:\n");
				for(i=0;i<N;i++)
				{
					printf("%d\t",A[i]);
				}
			}
			break;
		default:
			printf("\n\ninvalid choice!");
	}
}
