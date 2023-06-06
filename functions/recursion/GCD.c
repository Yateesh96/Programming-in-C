//GCD between 2 numbers using recursion
#include<stdio.h>
int gcd(int,int);
int main()
{
	int A,B,GCD;
	printf("enter the 2 numbers: ");
	scanf("%d%d",&A,&B);
	GCD=gcd(A,B);
	printf("GCD between %d and %d= %d",A,B,GCD);
}
int gcd(int a,int b)
{
	if(a==0)
		return b;
	else if(b==0)
		return a;
	else
		return(gcd(b,a%b));
}
