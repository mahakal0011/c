 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
int a[MAX],front=-1,rear=-1;
void insert();
void del();
void display();
void main()
{
    int ch;
    while(-1)
    {
       printf("Enter a 1 for insert,2 for delete, 3 for display and 4 for exit");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1:insert();
        break;
        case 2:del();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        deafault: printf("Wrong choice");

       } 
    }
    void insert();
    {
        int val;
        if((front==0 && rear==MAX-1)||(front==rear-1))
        {
            printf("Overflow");
            exit(0);

        }
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else if(rear=MAX-1)
        {
            rear=0;
        }
        else{
            rear=MAX+1;
        }
        printf("Enter the element");
        scanf("%d",&val);
        a[rear]= val;
    }
    del();
    {
        if (front==-1)
        {
            printf("Underflow");
            exit (0);
        }
        printf("The deleted value is %d",a[front]);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if (front==MAX-1)
        {
            front=0;
        }
        else{
            front=front++;

        }
    }
    display();
    {
        int fp=front,rp=rear;
        if(front==-1)
        {
            printf("Under flow");
            exit(0);
        }
        if(fp<=rp)
        {
            while(fp<=rp)
            {

             printf("%d",a[fp]);
             fp++;
             }
        }
        else{
            while(fp<=rp)
            {
                printf("%d",a[fp]);
                fp++;
            }
        }
    }

}

