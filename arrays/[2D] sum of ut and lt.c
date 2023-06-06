//sum of upper-triangular and lower-triangular elements
#include<stdio.h>
int main()
{
	int a[10][10],r,c,i,j,sum1=0,sum2=0;
	printf("enter the number of rows: \n");
	scanf("%d",&r);
	printf("enter the number of columns: \n");
	scanf("%d",&c);
	printf("enter the elements row by row: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	if(r==c)
	{
		printf("this is a square matrix\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i>j)		/*for upper-triangular elements*/
					sum1=sum1+a[i][j];
				if(i<j)		/*for lower-triangular elements*/
					sum2=sum2+a[i][j];
			}
		}
		printf("sum of uppertriangular elements= %d\n",sum1);
		printf("sum of lowertriangular elements= %d",sum2);
	}
	else
	{
		printf("this matrix is not a square matrix");
	}
}
