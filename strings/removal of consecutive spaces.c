#include<stdio.h>
#include<string.h>
void remspace(char str[])
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '&&str[i+1]==' ')
		{
			for(j=i+1;j<strlen(str);j++)
			{
				str[j]=str[j+1];
			}
			i--;
		}
	}
	printf("%s",str);
}
int main()
{
	char st[100];
	printf("input the string:\n");
	gets(st);
	remspace(st);
}
