#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n,i,max,min;
	float sum=0,avg;
	printf("Enter The Value Of Arry=");
	scanf("%d",&n);
	int a[n];
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i]);
		max=a[0];
		min=a[0];
	}
	for (i = 0; i < n; ++i)
	{
		if (a[i]>max)
		{
			max=a[i]++;
		}
		if(a[i]<min)
		{
			min=a[i]++;
		}
		sum=sum+a[i];
		avg=sum/n;
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
	printf("sum=%f\n",sum);
	printf("avg=%f\n",avg);

	return 0;
}