//insertion of a character
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,p;
	char c,*ptr;
	printf("enter the number of characters(size of string): ");
	scanf("%d",&n);
	ptr=(char*)calloc(n,sizeof(char));
	//if memory cant be allocated
	if(ptr==NULL)
	{
		printf("error!memory not allocated");
		exit(0);
	}
	printf("input the character array:\n");
	for(i=0;i<n;i++)
	{
		scanf(" %c",ptr+i);
	}
	*(ptr+n)='\0';
	ptr=realloc(ptr,n+1);
	printf("enter the position for insertion: ");
	scanf("%d",&p);
	printf("enter the character to insert: ");
	scanf(" %c",&c);
	n=n+1;
	for(i=n;i>=p-1;i--)
	{
		*(ptr+i)=*(ptr+(i-1));
	}
	*(ptr+(p-1))=c;
	printf("the resultant string is:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%c",*(ptr+i));
	}
	free(ptr);
}
