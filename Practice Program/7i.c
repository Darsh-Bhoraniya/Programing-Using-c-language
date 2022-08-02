#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the first side of triangle:\n");
    scanf("%d",&a);
    printf("Enter the second side of triangle:\n");
    scanf("%d",&b);
    printf("Enter the third side of triangle:\n");
    scanf("%d",&c);

    if(a==b && a==c)
    {
        printf("Triangle is equilateral\n");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Triangle is isosceles\n");
    }
    else if(a!=b && a!=c)
    {
        printf("Triangle is sceles\n");
    }
     if(((a*a) + (b*b)==(c*c)) || ((a*a) + (c*c))==(b*b) || ((b*b) + (c*c)==(a*a)))
    {
        printf("Triangle is right sided\n");
    }

    return 0;
}