#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the marks to check:");
    scanf("%d",&n);

    if(n>90)
    {
        printf("A+");

    }
    else if(n>80)
    {
        printf("B+");


    }
    else if(n>70)
    {
        printf("c+");

    }
    else if(n>60)
    {
        printf("d+");

    }
    else 
    {
        printf("not able to admisson");

    }
    return 0;
}