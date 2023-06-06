#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s[10][10];
	char temp[10];
	int i,j,n;
	printf("enter the number of strings: ");
	scanf("%d",&n);
	printf("input the strings:\n");
	for(i=0;i<n;i++)
	{
		printf("enter string--%d\n",i+1);
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);
			}
		}
	}
	printf("sorted names:\n\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
}
