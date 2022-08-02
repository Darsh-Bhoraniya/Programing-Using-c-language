#include<stdio.h>
void main()
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,min,max;
    printf("Enter ten numbers:");
    scanf("%d",&n1);

    max=n1;
    min=n1;

    scanf("%d",&n2);
    if(max<n2)
    {
       max=n2;
    }
    else if(min>n2)
    {
       min=n2;
    }

    scanf("%d",&n3);
    if(max<n3)
    {
       max=n3;
    }
    else if(min>n3)
    {
       min=n3;
    }

    scanf("%d",&n4);
    if(max<n4)
    {
       max=n4;
    }
    else if(min>n4)
    {
       min=n4;
    }

    scanf("%d",&n5);
    if(max<n5)
    {
       max=n5;
    }
    else if(min>n5)
    {
       min=n5;
    }

    scanf("%d",&n6);
    if(max<n6)
    {
       max=n6;
    }
    else if(min>n6)
    {
       min=n6;
    }

    scanf("%d",&n7);
    if(max<n7)
    {
       max=n7;
    }
    else if(min>n7)
    {
       min=n7;
    }

    scanf("%d",&n8);
    if(max<n8)
    {
       max=n8;
    }
    else if(min>n8)
    {
       min=n8;
    }

    scanf("%d",&n9);
    if(max<n9)
    {
       max=n9;
    }
    else if(min>n9)
    {
       min=n9;
    }

    scanf("%d",&n10);
    if(max<n10)
    {
       max=n10;
    }
    else if(min>n10)
    {
       min=n10;
    }

    printf("Max=%d\n",max);
    printf("Min=%d\n",min);
}   
