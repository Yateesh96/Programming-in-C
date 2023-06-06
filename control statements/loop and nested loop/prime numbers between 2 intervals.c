//Prime numbers between two intervals
#include<stdio.h>
int main()
{
	int i,j,k,L1,L2;
	printf("enter the lower and upper boundary: ");
	scanf("%d%d",&L1,&L2);
	printf("prime factors between %d and %d are: ",L1,L2);
	for(i=L1;i<=L2;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				k++;
		}
		if(k==2)/*since prime numbers have 1 and itself as factors,
		k will get incremented twice*/
			printf("%d,",i);
	}
}
