#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number to check");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if( n%i==0)
        {
            printf("not prime number");
            break;

        }
    }
    if(n%i==0)
    {
        printf("prime number");

    }
    return 0;
    
}