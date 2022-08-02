#include<stdio.h>

int main()
{
    int n,sum,i;
    i=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",sum);
        i++,sum=sum+i;
    }
    return 0;
}