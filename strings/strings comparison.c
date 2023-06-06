#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	int i,k=0,y;
	printf("enter the string 1: \n");
	gets(str1);
	printf("enter the string 2: \n");
	gets(str2);
	if(strlen(str1)==strlen(str2))
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]!=str2[i])
			{
				k=str1[i]-str2[i];
				break;
			}	
		}
		printf("comparision value = %d\n",k);
		//using strcmp predefined function
		y=strcmp(str1,str2);
		printf("comparision value using predefined function= %d\n",y);
		if(k==0)
			printf("these strings are equal");
		else if(k>0)
			printf("these strings are'nt equal\n str1>str2");
		else
			printf("these strings are'nt equal\n str2>str1");
	}
	else
		printf("string lenghts are not equal");
}
