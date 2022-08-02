#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter n number for Fector:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
            printf("your factor=%d\n",i);
        i++;
    }
}