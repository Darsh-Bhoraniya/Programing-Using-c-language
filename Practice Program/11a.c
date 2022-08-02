#include<stdio.h>
void main()
{
	int i=1,n,x,folra=1;
	printf("enter the value of x");
	scanf("%d",&x);
	printf("enter the value of power n");
	scanf("%d",&n);
	while(i<=n)
	{
		folra=folra*x;
		i++;
		printf("%d\n",folra);
	}

}