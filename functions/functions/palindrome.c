#include<stdio.h>
void palindrome(int n)
{
	int rev,rem,t;
	t=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(rev==t)
	{
		printf("it is palindrome");
	}
	else
		printf("it is not a plaindrome");
}
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	palindrome(num);
}
