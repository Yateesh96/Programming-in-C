#include<stdio.h>
#include<string.h>
int main()
{
	char str[150];
	int i,wrdct=0,linect=0;
	printf("enter the string: (press '*' to stop)\n\n");
	scanf("%[^*]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '||str[i]=='\t')
			wrdct++;
		if(str[i]=='\n')
		{
			linect++;
			wrdct++;
		}
	}
	linect++;
	wrdct++;
	printf("\nTotal number of lines= %d\nTotal number of words= %d\nTotal number of characters= %d",linect,wrdct,i);
}
