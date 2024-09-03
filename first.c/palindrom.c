#include<stdio.h>
void main()
{
    int rem,rev=0,m,n;
    printf("\n Enter a number to check");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        rev=rem+(rev*10);
        n=n/10;
    }
    printf("\n Reverse number is =%d ",rev);
    if(m==rev)
    {
        printf("\n IS a palindrom");
    }
    else
    {
        printf("\n it's not a palindroam");
        
    }
    
}