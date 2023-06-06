#include<stdio.h>
int wrdlen(char str[],int w[])
{
	int i,k=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
			w[k]=w[k]+1;
		else
			k++;
	}
	return k;
}
int main()
{
	char s[40];
	int i,j,wr[10]={0};
	printf("input the string:\n");
	gets(s);
	j=wrdlen(s,wr);
	for(i=0;i<=j;i++)
		printf("\nnumber of letters in the word %d = %d",i+1,wr[i]);
}
