#include<stdio.h>
#include<string.h>
int main()
{
	char text[70],pattern[60],rep[50];
	int c,d,e,position,tl,pl,i,k=0;
	printf("enter the text\n");
	gets(text);
	printf("enter the pattern\n");
	gets(pattern);
	tl=strlen(text);
	pl=strlen(pattern);
	if(pl>tl)
		printf("invalid pattern");
	else
	{
		for(c=0;c<=tl-pl;c++)	/*tl-pl since if pattern is found we don't wanna repeat*/
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
			printf("enter the text you want to replace\n");
			gets(rep);
			if(strlen(pattern)==strlen(rep))
			{
				for(i=position;k<strlen(rep);i++)
				{
					text[i]=rep[k];
					k++;
				}
				printf("the resultant string is:\n%s",text);
			}
			else
				printf("Invalid replacing text\nlength of replacing string isn't equal to length of pattern");
		}
		else
			printf("pattern not found");
	}
}
