//comparision of matrices
#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],i,j,r1,c1,r2,c2,count;
	int *(p1)[10],*(p2)[10];
	printf("enter the number of rows of A: ");
	scanf("%d",&r1);
	printf("enter the number of columns of A: ");
	scanf("%d",&c1);
	printf("input the elements of matrix A:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("A[%d][%d]= ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the number of rows of B: ");
	scanf("%d",&r2);
	printf("enter the number of columns of B: ");
	scanf("%d",&c2);
	printf("input the elements of matrix B:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("B[%d][%d]= ",i+1,j+1);
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<10;i++)
	{
		p1[i]=&A[i][0];
		p2[i]=&B[i][0];
	}
	if((r1==r2)&&(c1==c2))
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				if(*(*(p1+i)+j)==*(*(p2+i)+j))
					count++;
			}
		}
		if(count==r1*c1)
			printf("matrices are equal and equivalent");
		else
			printf("matrices are not equal but are equivalent");
	}
	else
		printf("comparision not possible\nthe order of 2 matrices are not equal");
}
