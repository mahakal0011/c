#include<stdio.h>
void main()
{
    int r,c;
    for (r=1;r<=3;r++)
    {
        for (c=1;c<=r;c++)
        {
            printf("                     *");

        }
        printf("\n");

    }
    return 0;
}