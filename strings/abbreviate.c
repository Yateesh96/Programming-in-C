#include<stdio.h>
void ABBREVITE(char a[])
{
	char abb[10];
	int i,k=1;
	abb[0]=a[0];
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			abb[k]=a[i+1];
			k++;
		}
	}
	abb[k]='\0';
	printf("the abbreviation of this name is :%s",abb);
}
int main()
{
	char name[40];
	printf("input the name: ");
	gets(name);
	ABBREVITE(name);
}
