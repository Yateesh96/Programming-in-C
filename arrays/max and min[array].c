//maximum and minimum element of an array
#include<stdio.h>
int max(int b[],int size)
{
	int i,maximum;
	maximum=b[0];
	for(i=1;i<size;i++)
	{
		if(b[i]>maximum)
			maximum=b[i];
	}
	return maximum;
}
int min(int b[],int size)
{
	int i,minimum;
	minimum=b[0];
	for(i=1;i<size;i++)
	{
		if(b[i]<minimum)
			minimum=b[i];
	}
	return minimum;
}
int main()
{
	int a[60],n,i,ma,mn;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	ma=max(a,n);
	mn=min(a,n);
	printf("the maximum value of this array is %d",ma);
	printf("\nthe minimum value of this array is %d",mn);
}
