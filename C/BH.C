#include<stdio.h>
int main()
{   int sum,n;
    sum=0;
    n=1;
    loop:
    sum=sum+n*n;
    if (n==10)
    
        goto print;
    else{
        n=n+1;
        goto loop;
    }
    print:
    return 0;
}