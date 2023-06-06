#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2;
	float d;
	printf("enter the coordinates of first point");
	scanf("%f%f",&x1,&y1);
	printf("enter the coordinates of second point");
	scanf("%f%f",&x2,&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("the distance between these points is %f",d);
}
