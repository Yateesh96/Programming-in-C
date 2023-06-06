#include<stdio.h>
void vowelcount(char str[])
{
	int i,vowelct=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
			vowelct++;
	}
	printf("Total number of vowels= %d",vowelct);
}
int main()
{
	char st[100];
	printf("input the string:\n");
	gets(st);
	vowelcount(st);
}
