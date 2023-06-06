#include<stdio.h>
int main()
{
	float a1[50],a2[50],res[70];
	int i,j,k,n1,n2;
	printf("enter the required number of elements in array-1:");
	scanf("%d",&n1);
	printf("enter the required number of elements in array-2:");
	scanf("%d",&n2);
	printf("enter the elements for a1 in ascending order\n");
	for(i=0;i<n1;i++)
	{
		printf("a1[%d]= ",i);
		scanf("%f",&a1[i]);
	}
	printf("enter the elements for a2 in ascending order\n");
	for(j=0;j<n2;j++)
	{
		printf("a2[%d]= ",j);
		scanf("%f",&a2[j]);
	}
	for(i=0,j=0,k=0;(i<n1&&j<n2);k++)
	{
		if(a1[i]<a2[j])
		{
			res[k]=a1[i];
			i++;
		}
		else
		{
			res[k]=a2[j];
			j++;
		}
	}
	while(i<n1)
	{
		res[k]=a1[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		res[k]=a2[j];
		k++;
		j++;
	}
	printf("the resultant array after merging is:\n");
	for(k=0;k<(n1+n2);k++)
	{
		printf("res[%d] = %f\n",k,res[k]);
	}
}
