#include<stdio.h>
#include<math.h>
int main()
{
	int P,N,R,t;
	float SI;
	float CI;
	printf("enter the values");
	scanf("%d%d%d",&P,&N,&R);
	SI=((float)P*N*R)/100;
	printf("simple interest is %f",SI);
	printf("\nenter the t value");
	scanf("%d",&t);
	CI=(float)P*pow(1+(float)R/N,(N*t));
	printf("the value of CI is %f",CI);
	
}
