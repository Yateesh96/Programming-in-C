#include<stdio.h>
void linsearch(int arr[],int s,int start,int end)
{
	int flag=0;
	if(s==arr[start])
	{
		printf("\n\nelement found at position %d",start+1);
		return;
	}
	if(start==end)
		flag=-1;
	else
		linsearch(arr,s,start+1,end);
	if(flag==-1)
	{
		printf("\n\nelement not found");
		return;
	}
}
void binsearch(int arr[],int s,int low,int high)
{
	int mid;
	mid=(low+high)/2;
	if(low>high)
	{
		printf("\n\nelement not found");
		return;
	}
	if(s==arr[mid])
	{
		printf("\n\nelement found at position %d",mid+1);
		return;
	}
	else if(s>arr[mid])
		binsearch(arr,s,mid+1,high);
	else
		binsearch(arr,s,low,mid-1);
}
int main()
{
	int a[30],i,x,n;
	int choice;
	printf("enter the no. of elements of array:");
	scanf("%d",&n);
	printf("enter the array elements in ascending order:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter element to be searched: ");
	scanf("%d",&x);
	printf("enter the choice:\n(1) -linear search\t(2) -binary search\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			linsearch(a,x,0,n-1);
			break;
		case 2:
			binsearch(a,x,0,n-1);
			break;
		default:
			printf("\ninvalid choice!");
	}
}
