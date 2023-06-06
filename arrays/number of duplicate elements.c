//number of duplicate elements
#include<stdio.h>
int main()
{
	int a[60],n,i,j,count=0;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				count++;
				break;
			}
		}
	}
	printf("number of duplicate elements = %d",count);
}
