#include<stdio.h>

void main()
{
    int n,sum=0,i=1;
    printf("Enter a number greater than 1:\n");
    scanf("%d",&n);
    while(i <= n)
    {
        printf("%d+ ",(i*i));
        sum=sum+i*i;
        i++;
    }
    printf ("\nyour series of sum is=%d",sum);
}