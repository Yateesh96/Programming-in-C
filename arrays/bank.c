#include<stdio.h>
#include<math.h>
palcheck(int n)
{
	int rev,k,t,count=0;
	t=n;
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	if(t==0)
		return 0;
	else
		k=t%10;
		rev=k*pow(10,count-1)+palcheck(t/10);
		return rev;
}
int main()
{
	int ac[]={12400,12401,12402,12403,12404,12405,12406,12407,12408,12409};
	int A,i,flag=0,p,p1,balance=10000,choice,at;
	printf("enter the Account number: ");
	scanf("%d",&A);
	for(i=0;i<10;i++)
	{
		if(A==ac[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		k:
			printf("enter the password");
			scanf("%d",&p);
			p1=palcheck(p);
			if(p1==p)
			{
				printf("correct password\nfeel free to proceed");
				printf("enter choice:\n1-credit\t2-debit\n");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						printf("enter the amount to add: ");
						scanf("%d",&at);
						balance=balance+at;
						printf("amount added successfully\nbalance amount is %d",balance);
						break;
					case 2:
						printf("enter the amount to withdraw:");
						scanf("%d",&at);
						balance=balance-at;
						printf("amount debited successfully\nbalance amount is %d",balance);
				}
			}
			else
			{
				printf("password incorrect!!\ntry again");
				goto k;
			}
	}
	else
		printf("account number not found");
}
