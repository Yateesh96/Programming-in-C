//linear and binary search
#include<stdio.h>
int main()
{
	int a[30],i,s,n,flag=0;
	int *p;
	int choice;
	int low,high,mid;
	p=&a[0];
	printf("enter the no. of elements of array:");
	scanf("%d",&n);
	printf("enter the array elements in ascending order:\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	printf("enter element to be searched: ");
	scanf("%d",&s);
	printf("enter the choice:\n(1) -linear search\t(2) -binary search\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			for(i=0;i<n;i++)
			{
				if(*(p+i)==s)
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				printf("\n\nelement found at position %d",i+1);
			else
				printf("\nelement not found");
			break;
		case 2:
			low=0;
			high=n-1;
			while(low<=high)
			{
				mid=(low+high)/2;
				if(s==*(p+mid))
				{
					printf("\nelement found at position %d",mid+1);
					break;
				}
				else if(s>*(p+mid))
				{
					low=mid+1;
				}
				else
				{
					high=mid-1;
				}
			}
			if(low>high)
			{
				printf("element not found");
			}
			break;
		default:
			printf("invalid choice!");
	}
}
