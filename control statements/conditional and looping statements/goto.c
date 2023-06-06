//odd numbers and their sum using goto
#include<stdio.h>
int main()
{
	int i=1,n,a=1,sum=0;
	printf("enter the n value: ");
	scanf("%d",&n);
	l:
		sum+=a;
		printf("%d,",a);
		a+=2;
		i++;
	if(i<=n)
		{
			goto l;
		}
	printf("\nSum of first %d odd numbers =%d",n,sum);
}
