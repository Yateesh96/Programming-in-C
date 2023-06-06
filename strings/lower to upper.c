#include<stdio.h>
void lower_upper(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			str[i]=str[i]-32;
	}
	printf("resultant string:\n%s",str);
}
int main()
{
	char st[100];
	printf("input the string:\n");
	gets(st);
	lower_upper(st);
}
