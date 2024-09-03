#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to check:");
    scanf("%d",&x);

    printf("%d",x%2 ==0);
    return 0;
}