//matrix multiplication
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],res[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter the order of matrix A: \n");
	scanf("%d%d",&r1,&c1);
	printf("enter the order of matrix B: \n");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		printf("matrix multiplication possible\nenter the elements of matrix A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("a[%d][%d]= ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the elements of matrix B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("b[%d][%d]= ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				res[i][j]=0;
				for(k=0;k<c1;k++)
				{
					res[i][j]=res[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("the resultant matrix is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",res[i][j]);
			}
			printf("\n");
		}
	}
	else
	printf("Invalid order\nMatrix multiplication not possible");
}
