#include<stdio.h>
struct person
{
	char name[20];
	int id;
	float basic,pf,hra,netsal,grosssal;
};
void calculation(struct person em[],int n1)
{
	int i;
	for(i=0;i<n1;i++)
	{
		em[i].pf=0.2103*em[i].basic;
	    em[i].hra=0.082*em[i].basic;
		em[i].grosssal=em[i].basic+em[i].hra;
		em[i].netsal=em[i].grosssal-em[i].pf;
	}
	for(i=0;i<n1;i++)
	{
		printf("\npf=%f\nhra=%f\nnetsalary=%f\ngross=%f\n",em[i].pf,em[i].hra,em[i].netsal,em[i].grosssal);
	}
}
int main()
{
	int n,i;
	printf("input the number of employee  ");
	scanf("%d",&n);
	struct person emp[5];
	for(i=0;i<n;i++)
	{
		printf("enter the name: ");
		scanf("%s",emp[i].name);
		printf("enter the id number: ");
		scanf("%d",&emp[i].id);
		printf("enter the basic salary");
		scanf("%f",&emp[i].basic);
	}
	calculation(emp,n);
}
