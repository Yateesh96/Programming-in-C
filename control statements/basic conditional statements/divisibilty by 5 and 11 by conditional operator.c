//divisibility by 5 and 11
#include<stdio.h>
int main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	((a%5)==0)?((a%11)==0)?printf("a is divisible by 5 and 11"):printf("a is divisible by 5 but not divisible by 11")
	:((a%11)==0)?printf("a is divisible by 11 but not divisible by 5"):printf("a is not divisible by 5 and 11");
	
}
