//Armstrong number check
#include<stdio.h>
#include<math.h>
int main()
{
	int n,count=0,t,x=0,number,q;
	printf("enter the number: ");
	scanf("%d",&n);
	number=n;
	t=n;
	while(n!=0)
	{
		n/=10;
		count++;
	}
	printf("number of digits= %d\n",count);
	while(t!=0)
	{
		q=t%10;
		x=x+pow(q,count);
		t=t/10;
	}
	printf("x= %d\n",x);
	if(x==number)
		printf("the number %d is an armstrong number",number);
	else
		printf("the number %d is not an armstrong number",number);
}
