#include<stdio.h>
void main()
{
    float n,i,sum;
    printf("Enter number:\n");
    scanf("%f",&n);
    i=1;
    sum=0;
    while(i<=n)
    {
        sum=sum+(1/i);
        i++;
    }
    printf("Answer=%f\n",sum);

}