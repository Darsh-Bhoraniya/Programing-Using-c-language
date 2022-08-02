#include <stdio.h>
int main()
{
	int no;
	printf("Enter any number:");
	scanf("%d",&no);

	if((no%10)%2==0)
	{
		printf("Last digit of number even\n");
	}
	else
	{
		printf("Last digit of number odd\n");
	}
	
}