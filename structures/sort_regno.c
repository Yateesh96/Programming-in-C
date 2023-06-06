#include<stdio.h>
struct DOB
{
	int dd;int mm;int yyyy;
};
struct student
{
	char name[20];
	int regno;
	struct DOB b_day,d_adm;
};
int main()
{
	int i,n,j;
	printf("enter the number of students: ");
	scanf("%d",&n);
	struct student s[n];
	struct student temp;
	for(i=0;i<n;i++)
	{
		printf("enter the name of student-%d",i+1);
		scanf("%s",s[i].name);
		printf("enter the register number of student-%d",i+1);
		scanf("%d",&s[i].regno);
		printf("enter the date of birth of student-%d in the format dd_mm_yyyy",i+1);
		scanf("%d%d%d",&s[i].b_day.dd,&s[i].b_day.mm,&s[i].b_day.yyyy);
		printf("enter the date of admission of student-%d in the format dd_mm_yyyy",i+1);
		scanf("%d%d%d",&s[i].d_adm.dd,&s[i].d_adm.mm,&s[i].d_adm.yyyy);
	}
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(s[j].regno>s[j+1].regno)
			{
			temp=s[j];
			s[j]=s[j+1];
			s[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i].name);
		printf("%d\n",s[i].regno);
		printf("%d %d %d\n",s[i].b_day.dd,s[i].b_day.mm,s[i].b_day.yyyy);
		printf("%d %d %d\n",s[i].d_adm.dd,s[i].d_adm.mm,s[i].d_adm.yyyy);
	}
}
