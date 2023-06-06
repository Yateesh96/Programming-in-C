//Roots of quadratic(switch)
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D;
float R1,R2;
printf("enter the coefficients: ");
scanf("%f%f%f",&a,&b,&c);
D=pow(b,2)-4*a*c;
switch(D==0)
	{
	case 1:
		printf("the roots are real and equal");
		R1=-b/(2*a);R2=-b/(2*a);
		printf("\nthe roots are %f and %f",R1,R2);
		break;
	case 0:
		switch(D>0)
		{
		case 1:
			printf("the roots are real and distinct");
			R1=(-b+sqrt(D))/(2*a);
			R2=(-b-sqrt(D))/(2*a);
			printf("\nthe roots are %f and %f",R1,R2);
			break;
		case 0:
			printf("the roots are imaginary");
			float RP,IP;
			RP=-b/(2*a);IP=sqrt(-D)/(2*a);
			printf("\nthe roots are (%f+i%f) and (%f-i%f)",RP,IP,RP,IP);
			break;
		}
	}
}
