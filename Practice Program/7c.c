#include <stdio.h>
int main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);

	if(ch>='A' && ch<='Z')
	{
		printf("Entered character is capital letter");
	}
	else if(ch>='a' && ch<='b')
	{
		printf("Entered character is small letter");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("Entered character is digit");
	}
	else
	{
		printf("Entered character is spcial character");
	}
}