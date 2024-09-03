#include<stdio.h>
int main()
{
    int sum=0,r,rem,m,i,n;
    printf("\n Enter a number to check");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem =n%10;
        sum=sum=rem*rem*rem;
        n=n/10;

    }
    if (m==sum)
    {
        printf("\n Arrstrong's Number");

    }
    else{
        printf("\n Not Armstrong Number");
        
    }
}