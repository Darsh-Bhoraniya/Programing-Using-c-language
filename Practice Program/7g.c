#include<stdio.h>
void main()
{
	float sum,per,a,b,c,d,e;

	printf("Enter marks of sub a:");
	scanf("%f",&a);
	printf("Enter marks of sub b:");
	scanf("%f",&b);
	printf("Enter marks of sub c:");
	scanf("%f",&c);
	printf("Enter marks of sub d:");
	scanf("%f",&d);
	printf("Enter marks of sub e:");
	scanf("%f",&e);
	sum= a+b+c+d+e;
	printf("Your total is %f\n",sum);
	per= (sum)/5;
	printf("Your persantage is %.2f\n",per);
	if(per<35)
	{
		printf("student belongs to fail category");

	}
	else if(35<=per && per<45)
	{
		printf("student belongs to pass class category");
	}
	else if(45<=per && per<60)
	{
		printf("student belongs to second class category");
	}
	else if(60<=per && per<70)
	{
		printf("student belongs to first class category");
	}
	else
	{
		printf("student belongs to distinction category");
	}
}
