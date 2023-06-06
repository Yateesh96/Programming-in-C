#include<stdio.h>
#include<string.h>
int main()
{
	char text[70],pattern[60],rep[50];
	char result[70];
	int c,d,e,position,tl,pl,i,k=0;
	printf("enter the text\n");
	gets(text);
	printf("enter the pattern to find\n");
	gets(pattern);
	tl=strlen(text);
	pl=strlen(pattern);
	if(pl>tl)
		printf("invalid pattern");
	else
	{
		for(c=0;c<=tl-pl;c++)
		{
			position=e=c;
			for(d=0;d<pl;d++)
			{
				if(pattern[d]==text[e])
					e++;
				else
					break;
			}
			if(d==pl)
				break;
		}
		if(d==pl)
		{
			printf("pattern found at position %d\n",position+1);
			printf("enter the text you want to replace with\n");
			gets(rep);
			for(i=0;i<position;i++)
			{
				result[i]=text[i];
			}
			for(k=0,i=position;k<strlen(rep);i++,k++)
			{
				result[i]=rep[k];
			}
			while(text[e]!='\0')
			{
				result[i]=text[e];
				i++;
				e++;
			}
			result[i]='\0';
			printf("the resultant string is:\n%s",result);
		}
		else
			printf("pattern not found");
	}
}
