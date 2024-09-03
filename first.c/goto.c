#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of x");
    scanf("%d",&n);
    if(n>10)
    {
        goto cse;
        printf("hello");
        
    }
    else
    {
        printf("I'm in else");

    }
    cse: printf("I am in cse");

    return 0;
    }
    
