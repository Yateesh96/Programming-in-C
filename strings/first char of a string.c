#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int i,k;
	char temp;
	printf("input the string:\n");
	scanf("%s",str);
	if(str[0]>=65&&str[0]<=90||str[0]>=97&&str[0]<=122)
	{
		printf("valid!!");
	}
	else if(str[0]>='0'&&str[0]<='9')
	{
		temp=str[0];
		for(i=0;i<strlen(str);i++)
		{
			str[i]=str[i+1];
		}
		str[i-1]=temp;
		printf("\n\n%s",str);
	}
	else
	{
		for(i=0;str[i]!='\0';i++)
		{
			str[i]=str[i+1];
		}
		printf("\n\n%s",str);
	}
}
