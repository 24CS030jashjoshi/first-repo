#include<stdio.h>
void main()
{
    
    int a;
    printf("enter the number a\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("your number %d is even",a);
    }
    else{
        printf("your number %d is odd",a);
    }

}