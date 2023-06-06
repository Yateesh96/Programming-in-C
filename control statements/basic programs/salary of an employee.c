//salary of an employee using constants in the program
#include<stdio.h>
int main()

{
	const float HRA=0.1f,TA=0.05f;
	float basic_pay,salary;
	printf("enter the basic pay");
	scanf("%f",&basic_pay);
	salary=basic_pay+(HRA+TA)*basic_pay;
	printf("the salary of an employee is %f",salary);
}
