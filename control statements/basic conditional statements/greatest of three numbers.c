//greatest of three numbers using conditional operators
#include<stdio.h>
int main()
{
	int N1,N2,N3;
	printf("enter the values");
	scanf("%d%d%d",&N1,&N2,&N3);
	(N1>N2)?(N1>N3)?printf("N1 is greatest"):printf("N3 is greatest"):
	(N2>N3)?printf("N2 is greatest"):printf("N3 is greatest");
}
