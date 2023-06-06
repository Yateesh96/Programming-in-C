#include<stdio.h>
#include<math.h>
void SI(int p)
{
	int n,r;
	float result;
	printf("enter n,r:");
	scanf("%d%d",&n,&r);
	result=(p*n*r)/100.0;
	printf("simple interest= %f\n",result);
}
void CI(int p)
{
	float n,r,t;
	float result;
	printf("enter n,r,t:");
	scanf("%f%f%f",&n,&r,&t);
	result=p*pow(1+r/n,n*t);
	printf("compound interest= %f\n",result);
}
int main()
{
	int p;
	printf("enter the principal value:");
	scanf("%d",&p);
	SI(p);
	CI(p);
}
