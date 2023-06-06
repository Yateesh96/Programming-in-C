#include<stdio.h>
int UPPER(int A[][10],int n1,int ue[])
{
	int i,j,k=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i<j)
			{
				*(ue+k)=*(*(A+i)+j);
				k++;
			}
		}
	}
	return k;
}
int LOWER(int A[][10],int n1,int le[])
{
	int i,j,k=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(i>j)
			{
				*(le+k)=*(*(A+i)+j);
				k++;
			}
		}
	}
	return k;
}
int main()
{
	int mat[10][10],i,j,n,x;
	int res[10];
	char choice;
	printf("enter the order of matrix: ");
	scanf("%d",&n);
	printf("input the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("mat[%d][%d]= ",i+1,j+1);
			scanf("%d",*(mat+i)+j);
		}
	}
	printf("the matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d ",*(*(mat+i)+j));
		}
		printf("\n");
	}
	printf("enter the choice\nu--upper\tl--lower\n");
	scanf(" %c",&choice);
	switch(choice)
	{
		case 'u':
			x=UPPER(mat,n,res);
			printf("upper triangle elts:\n");
			for(i=0;i<x;i++)
			{
				printf("%d\t",*(res+i));
			}
			break;
		case 'l':
			x=LOWER(mat,n,res);
			printf("lower triangle elts:\n");
			for(i=0;i<x;i++)
			{
				printf("%d\t",*(res+i));
			}
			break;
		default:
			printf("invalid choice!");
	}
}
