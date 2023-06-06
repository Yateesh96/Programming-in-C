#include <stdio.h>
#include <string.h>

char* reverse(char*);
int main()
{
    char str1[20],*str2;
    int i=0;
 
    printf("Enter a main string: ");
    scanf("%s", str1);
    str2= reverse(str1);
     printf("\n SUB STRING in main = %s  ",str2);
    
}
 
char* reverse(char str1[])
{
    char s[20];
    int n,m,i,j;
printf("\n enter the postion to eractxt");
scanf("%d",&n);
printf("\n enter the number of chracters to extract");
scanf("%d",&m);
j=0;
    for(i=n;str1[i]!='\0'&&j<=m;i++,j++)
    {
    	s[j]=str1[i];
   	
	}
	 printf("\n SUB STRING in function = %s",s);

	return s;
}
