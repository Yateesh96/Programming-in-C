#include<stdio.h>
int main()
{
	char str[40];
	int i,count=0;
	printf("input the string\tenter * to stop:\n");
	scanf("%[^*]",str);
	for(i=0;str[i]!='\0';i++)
	{
		switch(str[i])
		{
			case 'a':				/*no breaks since we need all vowels*/
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				count++;
				break;
		}
	}
	printf("\n%d",count);
}
