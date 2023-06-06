//palindrome check using recursion
#include<stdio.h>
#include<math.h>
int pal(int n)
{
	int rev,k,t,count=0;
	t=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	if(t==0)
		return 0;
	else
		k=t%10;
		rev=k*pow(10,count-1)+pal(t/10);
		return rev;
}
int main()
{
	int num,res;
	printf("enter number: ");
	scanf("%d",&num);
	res=pal(num);
	printf("reversed number= %d",res);
	if(res==num)
	{
		printf("\n%d is a palindrome",num);
	}
	else
	{
		printf("\n%d is not a palindrome",num);
	}
}

