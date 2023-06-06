/*Write a C program that will copy m consecutive characters from a string S1
beginning at position N into another string S2 using function. (function receive S1
and N as an argument, return S2 to main using pointer)*/
#include<stdio.h>
char* stringcopy(char*);
int main()
{
	char S1[50],*str2;
	printf("input the string:\n");
	scanf("%s",S1);
	str2=stringcopy(S1);
	printf("resultant string2:\n %c",str2);
}
char* stringcopy(char str[])
{
	char S2[45];
	int n,i,j=0,m,k;
	printf("enter the position from which you wanna copy:");
	scanf("%d",&n);
	printf("enter the number of chars from n till which you wanna copy:");
	scanf("%d",&m);
	for(k=0,i=n-1;k<m;i++,k++)
	{
		S2[j]=str[i];
		j++;
	}
	S2[j]='\0';
	printf("%s\n",S2);
	return S2;
}
