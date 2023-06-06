#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],rev[100];
	int i,j,n;
	printf("enter the string: \n");
	gets(str);
	n=strlen(str);
	for(i=n-1,j=0;i>=0;i--,j++)
	{
		rev[j]=str[i];
	}
	rev[j]='\0';
	printf("reversed string is:\n%s",rev);
}
