//to find reverse and palindrome verification
#include<stdio.h>
void reverse(int *n)
{
	int re=0;
	while(*n!=0)
	{
		re=re*10+*n%10;
		*n=*n/10;
	}
	*n=re;
}
int main()
{
	int num,t;
	printf("enter the number: ");
	scanf("%d",&num);
	t=num;
	reverse(&num);
	printf("\nnumber after reversing is %d",num);
	if(t==num)
		printf("\n\n%d is a palindrome",t);
	else
		printf("\n\n%d is not a palindrome",t);
}
