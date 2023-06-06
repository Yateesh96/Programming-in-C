#include<stdio.h>
#include<string.h>
void length_of(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	printf("length of string is %d\n",i);		/*this length_of fn is called user defined fn*/
}
int main()
{
	char s[50];
	int k;
	printf("enter the string\n");
	scanf("%s",s);
	length_of(s);
	k=strlen(s);		/*this strlen is a predefined fn*/
	printf("string length using predefined fn = %d",k);
}
