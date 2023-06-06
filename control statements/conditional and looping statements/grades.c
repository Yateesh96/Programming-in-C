//Grades
#include<stdio.h>
int main()
{
	int p,ch,b,m,c,total;
	float percent;
	printf("enter the marks: ");
	scanf("%d%d%d%d%d",&p,&ch,&b,&m,&c);
	total=p+ch+b+m+c;
	percent=(float)total*100/500;
	printf("percentage :%f\n",percent);
	if(percent>=90)
	{
		printf("GRADE A");
	}
	else if(percent>=80)
	{
		printf("GRADE B");
	}
	else if(percent>=70)
	{
		printf("GRADE C");
	}
	else if(percent>=60)
	{
		printf("GRADE D");
	}
	else if(percent>=40)
	{
		printf("GRADE E");
	}
	else
	{
		printf("GRADE F");
	}
}
