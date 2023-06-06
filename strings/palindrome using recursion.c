#include<stdio.h>
#include<string.h>
void palindrome(char str[],int start,int end)
{
	if(str[start]==str[end-start])
	{
		if(start==end/2)
			printf("it is a palindrome");
		else
			palindrome(str,start+1,end);
	}
	else
		printf("it's not a palindrome");
}
int main()
{
	char s[70];
	int n;
	printf("enter the string:\n");
	scanf("%s",s);
	n=strlen(s);
	palindrome(s,0,n-1);
}
