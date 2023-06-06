#include<stdio.h>
void subjectavg(int a[][5],int m)
{
	float sa[5];
	int i,j;
	for(j=0;j<5;j++)
	{
		sa[j]=0;
		for(i=0;i<m;i++)
		{
			sa[j]=sa[j]+a[i][j];
		}
	}
	printf("\n\nsubject-wise average is\n");
	for(j=0;j<5;j++)
	{
		sa[j]=(float)sa[j]/m;
		printf("sa[%d] = %f\n",j+1,sa[j]);
	}
}
void studentavg(int a[][5],int m)
{
	float sta[5];
	int i,j;
	for(i=0;i<m;i++)
	{
		sta[i]=0;
		for(j=0;j<5;j++)
		{
			sta[i]=sta[i]+a[i][j];
		}
	}
	printf("\n\nstudent-wise average is\n");
	for(i=0;i<m;i++)
	{
		sta[i]=(float)sta[i]/5;
		printf("sta[%d] = %f\n",i+1,sta[i]);
	}
}
void below50(int a[][5],int m)
{
	float sta[5];
	int i,j,count=0;
	for(i=0;i<m;i++)
	{
		sta[i]=0;
		for(j=0;j<5;j++)
		{
			sta[i]=sta[i]+a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		sta[i]=(float)sta[i]/5;
		if(sta[i]<50)
			count++;
	}
	printf("no. of students with average less than 50 = %d\n",count);
}
void display(int b[][5],int p)
{
	int i,j;
	for(i=0;i<p;i++)
	{
		printf("\nstudent-%d\n",i);
		for(j=0;j<5;j++)
		{
			printf("sub-%d=%d\t",j+1,b[i][j]);
		}
	}
}
int main()
{
	int marks[20][5];
	int n,i,j;
	int choice;
	printf("enter the number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("input the marks of student-%d\n",i+1);
		for(j=0;j<5;j++)
		{
			printf("subject--%d = ",j+1);
			scanf("%d",&marks[i][j]);
		}
	}
	printf("enter the choice\n1-subject-wise average\t2-student-wise average\t3-students below average 50\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			subjectavg(marks,n);
			break;
		case 2:
			studentavg(marks,n);
			break;
		case 3:
			below50(marks,n);
			break;
		default:
			display(marks,n);
	}
}
