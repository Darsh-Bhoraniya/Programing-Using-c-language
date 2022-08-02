#include<stio.h>
int main(int argc, char const *argv[])
{
	int n,i,max,min;
	float sum=0,avg;
	printf("Enter The Value Of Arry=");
	scanf("%d",&n);
	int a[n];
	for (i = 0; i < n; ++i)
	{
		scanf("%d",&a[i])
		max=a[0];
		min=a[0];
	}
	for (int i = 0; i < n; ++i)
	{
		if (max<a[i])
		{
			max++;
		}
		if(min>a[i])
		{
			min++;
		}
		sum=sum+a[i];
		arg=sum/n;
	}
	printf("max=%d",max);
	printf("min=%d",min);
	printf("sum=%d",sum);
	printf("avg=%d",avg);

	return 0;
}