//e^x series calculation
#include<stdio.h>
#include<math.h>
int main()
{
	int nr,dr,i=0,j,x,n,fact;
	float sum=0;
	printf("enter the value of 'x' : ");
	scanf("%d",&x);
	printf("enter the number of terms: ");
	scanf("%d",&n);
	while(i<n)
	{
		nr=pow(x,i);
		j=1;
		fact=1;
		while(j<=i)
		{
			fact=fact*j;
			j++;
		}
		dr=fact;
		sum=sum+((float)nr/dr);
		i++;
	}
	printf("sum of first %d terms of e^%d series = %f",n,x,sum);
}
