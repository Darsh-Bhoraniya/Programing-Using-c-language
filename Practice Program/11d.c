#include <stdio.h>
void main()
{
    int n,last;
    printf("Enter a integer:");
    scanf("%d",&n);
    last=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    printf("sum of 1st and last digit = %d",n+last);
}