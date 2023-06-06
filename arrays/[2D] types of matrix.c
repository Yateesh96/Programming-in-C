//type of matrix
#include<stdio.h>
void issymmetric(int b[][10],int p)
{
	int i,j,t=0;
	for(i=0;i<p;i++)
	{
		for(j=0;j<p;j++)
		{
			if((i!=j)&&(b[i][j]==b[j][i]))
				t++;
		}
	}
	if(t==(p*p-p))
		printf("A is symmetric matrix\n");
	else
		printf("A is not a symmetric matrix\n");
}
void isskewsymmetric(int c[][10],int q)
{
	int i,j,t=0;
	for(i=0;i<q;i++)
	{
		for(j=0;j<q;j++)
		{
			if(i!=j)
			{
				if(c[i][j]==-c[j][i])
					t++;
			}
			else
			{
				if(c[i][j]==0)
					t++;
			}
		}
	}
	if(t==q*q)
		printf("A is skew-symmetric matrix\n");
	else
		printf("A is not a skew-symmetric matrix\n");
}
void isdiagonal(int d[][10],int r)
{
	int i,j,t=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(i!=j)
			{
				if(d[i][j]==0)
					t++;
			}
		}
	}
	if(t==(r*r-r))
		printf("A is diagonal matrix\n");
	else
		printf("A is not a diagonal matrix\n");
}
void isidentity(int e[][10],int s)
{
	int i,j,t=0;
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(i!=j)
			{
				if(e[i][j]==0)
					t++;
			}
			else
			{
				if(e[i][j]==1)
					t++;
			}
		}
	}
	if(t==s*s)
		printf("A is an identity matrix\n");
	else
		printf("A is not an identity matrix\n");
}
int main()
{
	int a[10][10],n,i,j;
	printf("enter the order of the square matrix: ");
	scanf("%d",&n);
	printf("enter the elements row by row: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf(" MATRIX A :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	issymmetric(a,n);
	isskewsymmetric(a,n);
	isdiagonal(a,n);
	isidentity(a,n);
}
