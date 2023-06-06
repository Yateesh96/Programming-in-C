//Prime factors of a given number
#include<stdio.h>
int main()
{
int N,i,j,k;
printf("Enter the Number: ");
scanf("%d",&N);
printf("Prime Factors of %d are ",N);
for(i=1;i<=N;i++)
{
	if(N%i==0)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
			{
				k++;
			}
		}
		if(k==2)	
		printf("%d,",i);
	}
}
}
