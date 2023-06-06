//last occurence of a character in a string
#include<stdio.h>
void choccurence(char str[],char c)
{
	int i,flag=-1;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
			flag=i;
	}
	if(flag==-1)
		printf("required chracter not found");
	else
		printf("the last occurence of %c in the string\t%s\tis at the position %d",c,str,flag+1);
}
int main()
{
	char s[50],ch;
	printf("input the string:");
	gets(s);
	printf("enter the character you wanna search for: ");
	scanf(" %c",&ch);
	choccurence(s,ch);
}
