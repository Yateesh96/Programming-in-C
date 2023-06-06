#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j,temp;
	printf("Enter the string:");
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reverse string is %s",str);
}
