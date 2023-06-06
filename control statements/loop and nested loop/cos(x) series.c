//cos(x) series calculation
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,k,angle;
	float x,Nr,Dr,fact,sum=0;
	printf("enter the angle: ");
	scanf("%d",&angle);
	printf("enter the number of terms: ");
	scanf("%d",&n);
	x=0.0174*angle;
	j=0;
	for(i=1;i<=n;i++)
	{
		Nr=pow(x,j);
		fact=1;
		for(k=1;k<=j;k++)
		{
			fact=fact*k;
		}
		Dr=fact;
		sum=sum+(pow(-1,i+1)*Nr/Dr);
		j+=2;
	}
	printf("sum of first %d terms of cos(%d) series = %f",n,angle,sum);
}
