#include <stdio.h>
#include <string.h>
char* reverse(char [], int, int);
int main()
{
    char str1[20],*str2;
    int size;
 
    printf("Enter a string to reverse: ");
    scanf("%s", str1);
    size = strlen(str1);
   str2= reverse(str1, 0, size - 1);
    printf("The string after reversing is: %s\n", str2);
    
}
char* reverse(char str1[], int index, int size)
{
    char *temp,s[20];
    int n,i,j;
    n=strlen(str1);
    j=n-1;
    for(i=0;i<n;i++)
    {
    	s[i]=str1[j];
   		j--;
	}
	return s;
}
