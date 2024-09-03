#include<stdio.h>
int main()
{
    int n;
    printf("Enter the marks:");
    scanf("%d",&n);

    if(n>90)
    {
        printf("a+");

    }
    else if(n>80)
    
    {
        printf("a");

    }
    else if(n>70)
    {
        printf("b");

    }
    else
    {
        printf("fail");

    }
    return 0;
}