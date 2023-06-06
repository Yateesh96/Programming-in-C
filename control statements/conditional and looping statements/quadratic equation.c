//Roots of quadratic equation(if-else-if ladder)
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,D;
	float R1,R2;
	printf("enter the coefficients: ");
	scanf("%f%f%f",&a,&b,&c);
	D=pow(b,2)-4*a*c;
	if(D==0)
	{
		printf("the roots are real and equal");
		R1=-b/(2*a);
		R2=-b/(2*a);
		printf("\nthe roots are %f and %f",R1,R2);
	}
	else if(D>0)
	{
		printf("the roots are real and distinct");
		R1=(-b+sqrt(D))/(2*a);
		R2=(-b-sqrt(D))/(2*a);
		printf("\nthe roots are %f and %f",R1,R2);
	}
	else
	{
		printf("the roots are imaginary and are complex conjugates");
		float RP,IP;
		RP=-b/(2*a);IP=sqrt(-D)/(2*a);
		printf("\nthe roots are (%f+i%f) and (%f-i%f)",RP,IP,RP,IP);
	}
}
