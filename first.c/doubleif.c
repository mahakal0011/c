#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number to check");
    scanf("%d",&number);

    if(number>=0)
    {
        printf("positive\n");
        if(number% 2==0){
        
        printf("Number is even");
        }
        else{
            printf("The number is odd\n");

        }
       
        return 0;
    }
    else
        {
            printf("Negetive\n");

        }
