#include<stdio.h>
int main()
{
    int price[3];
    printf("Enter the  3 items price");
    scanf("%d",& price[0]);
    scanf("%d",&price[1]);
    scanf("%d",&price[2]);

    printf("The total price1:%d\n",price[0]+(1.8*price[0]));
    printf("2nd:%d\n",price[1]+(1.8*price[1]));
    printf("3rd:%d\n",price[2]+(1.8*price[2]));
    return 0;
}