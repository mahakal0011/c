#include<stdio.h>
int main()
{
    int n;
    printf("Take an integer:\n");
    scanf("%d",&n);

    if(n%2 == 0)
    printf("Even\n");
    else
    printf("odd\n");
    return 0;

}