#include<stdio.h>
#include<string.h>
int main()
{
	char text[70],pattern[60];
	int c,d,e,count=0,tl,pl;
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
			e=c;
			for(d=0;d<pl;d++)
			{
				if(pattern[d]==text[e])
					e++;
				else
					break;
			}
			if(d==pl)
				count++;
		}
		if(count>0)
			printf("pattern found %d time(s)",count);
		else
			printf("pattern not found");
	}
}
