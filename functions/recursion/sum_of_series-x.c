#include<stdio.h>
#include<math.h>
float sumofseries(int y,int m)
{
	if(m==1)
	{
		printf("1");
		return 1;
	}
	else
	{
		printf("(%d^%d)/%d + ",y,m,m);
		return((pow(y,m)/(float)m)+sumofseries(y,m-1));
	}
}
int main()
{
	int x,n,i;
	float S;
	printf("enter the X value: ");
	scanf("%d",&x);
	printf("enter the number of terms: ");
	scanf("%d",&n);
	S=sumofseries(x,n);
	printf("\n\nsum = %f",S);
}
