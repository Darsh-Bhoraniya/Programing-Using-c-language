#include<stdio.h>
void main()
{
float ans, a, b, choice;
printf("Enter 1st number:");
scanf("%f", &a);
printf("Enter 2nd number:");
scanf("%f", &b);
printf("choice for addition=1\n");
printf("choice for substraction=2\n");
printf("choice for multiplication=3\n");
printf("choice for division=4\n");
printf("Enter your choice:");
scanf("%f", &choice);


if(choice==1)
{
    ans=a+b;
    printf("addition of two numbers is %f",ans);
}
else if(choice==2)
{
    ans=a-b;
    printf("substraction of two numbers is %f",ans);
}
else if(choice==3)
{
    ans=a*b;
    printf("multiplication of two numbers is %f",ans);
}
else if(choice==4)
{
    ans=a/b;
    printf("division of two numbers is %f",ans);
}
else
{
    printf("Value not Found");
}
}
