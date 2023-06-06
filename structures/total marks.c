#include<stdio.h>
struct stdet
{
	char s_name[20];
	int rno;
	float marks[5];
};
int main()
{
	int i;
	struct stdet intern,external,total;
	printf("enter the name of student: ");
	scanf("%s",total.s_name);
	printf("enter the roll no: ");
	scanf("%d",&total.rno);
	printf("enter the internal marks: ");
	for(i=0;i<5;i++)
	{
		scanf("%f",&intern.marks[i]);
	}
	printf("enter the external marks: ");
	for(i=0;i<5;i++)
	{
		scanf("%f",&external.marks[i]);
	}
	for(i=0;i<5;i++)
	{
		total.marks[i]=intern.marks[i]+external.marks[i];
	}
	printf("%s\nroll.no: %d\n",total.s_name,total.rno);
	for(i=0;i<5;i++)
	{
		printf("total marks sub-%d : %.2f\n",i+1,total.marks[i]);
	}
}
