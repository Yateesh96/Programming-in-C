//largest element
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*lar,max;
	printf("enter the no. of elements: ");
	scanf("%d",&n);
	lar=(int*)calloc(n,sizeof(int));
	//if memory cant be allocated
	if(lar==NULL)
	{
		printf("error!memory not allocated");
		exit(0);
	}
	printf("enter the elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",lar+i);
	}
	max=*lar;
	for(i=0;i<n;i++)
	{
		if(*(lar+i)>max)
			max=*(lar+i);
	}
	printf("largest element  is %d",max);
	free(lar);
}
