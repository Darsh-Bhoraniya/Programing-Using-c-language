#include<stdio.h>
void main()
{
    float n,i=1,sum=0,avg;
    printf("Enter number:\n");
    scanf("%f",&n);
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("your sum is=%.2f\n",sum);
    avg=sum/n;
    printf("your avg is=%.2f\n",avg);
}