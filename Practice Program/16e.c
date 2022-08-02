#include <stdio.h>
int main(int argc, char const *argv[])
{

	int n, i, j;
	int sum = 0;
	int a[n], total[3];
	float average[3];
		for (i = 1; i <= 3; i++)
		{
			printf("Enter marks for %d student:\n", i);
			sum = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", a[i]);
			scanf("%d", &a[i]);
		sum += a[i];
		}
			total[i] = sum;
			average[i] = (float)(sum / 5);
		}
		for (i = 1; i <= 3; i++)
		{
			printf("\nStudent::%d --> Total = %d\t|\tAverage =%.2f\n", i, total[i], average[i]);
		}
		printf("\n");
	

	return 0;
}