//sparse matrix check
#include<stdio.h>
int main()
{
	int mat[10][10],i,j,r,c,zrct=0;
	int *p=&mat[0][0];		/*this kinda assigning is required*/
	printf("enter the number of rows: ");
	scanf("%d",&r);
	printf("enter the number of columns: ");
	scanf("%d",&c);
	printf("input the elements of matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("mat[%d][%d]= ",i+1,j+1);
			scanf("%d",p+(i*c+j));
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(*(p+(i*c+j))==0)
				zrct++;
		}
	}
	if(zrct<=(r*c/2))
		printf("\n\nthis matrix is a dense matrix");
	else
		printf("\n\nthis matrix is a sparse matrix");
}
