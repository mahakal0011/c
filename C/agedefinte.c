#include<stdio.h>
int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);

    if(age>18)
    {
        printf("They can vote");

    }
    else
    {
        printf("They can not vote");
    }
    return 0;
}