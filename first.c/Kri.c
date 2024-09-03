#include<stdio.h>
int main(){
    int fact,sum=0,n,rem,m,i;
    printf("\n Enter the value to check");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        rem=n%10;
        fact +1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(m==sum)
    {
        printf("\n Krishnamurty's Number");
    }else
    {
        printf("\n Not a Krihnamurty's Number");
    }
    return 0;

    }
    
        
    
