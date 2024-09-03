#include<stdio.h>
int main()
{
    int day;
    printf("Enter a day");
    scanf("%d",&day);

    switch(day)
    {
        case 1:printf("Monday \n");
        break;
        case 2:printf("Tuesday\n");
        break;
        case 3:printf("Wednes day\n");
        break;
        case 4 :printf("friday\n");
        break;
        default:printf("Enter a valid number\n");
        return 0;
    }
}