#include<stdio.h>
struct DOB
{
	int dd,mm,yyyy;
};
int main()
{
	struct DOB b_day,c_day;
	int age;
	printf("input the date of birth of the user in the format dd_mm_yyyy");
	scanf("%d%d%d",&b_day.dd,&b_day.mm,&b_day.yyyy);
	printf("input the current date in the format dd_mm_yyyy");
	scanf("%d%d%d",&c_day.dd,&c_day.mm,&c_day.yyyy);
	if(b_day.mm>c_day.mm)
		age=c_day.yyyy-b_day.yyyy-1;
	else
		age=c_day.yyyy-b_day.yyyy;
	printf("age = %d years",age);
}
