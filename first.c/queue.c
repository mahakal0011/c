#include<stdio.h>
#include <stdlib.h>
int queue[5],f=-1,r=-1;
void rear();
void front();
void show();
void main()
{
    int ch ;
    printf("1 rear\n");
    printf("2 front\n");
    printf("3 show\n");
    printf("4 exit");

while(1)
{
    printf("Enter choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:rear();
        break;
        case 2:front();
        break;
        case 3:show();
        break;
        case 4:exit(0);
        break;
        default: printf("wrong choice\n");
        
    }
}
}
void rear()
{
    int item;
    if(r==5-1)
    {
        printf("Queue is full\n");
    }
    else{
        if(f==-1)
        {
            f=0;
        }
        printf("Insert Element in queue\n");
        scanf("%d",&item);
        r=r+1;
        queue[r]=item;

    }
}
void front()
{
    if(f==-1)
    {
        printf("Queue is empty\n");

    }
    else{
        printf("Deleted %d",queue[f]);
        f=f+1;
    }
}
void show()
{
    int i;
    if(f==-1)
    {
        printf("queue is empty\n");

    }
    else{
        printf("queue Elements:\n");
        for(i=f;i<=r;i++)
        {
            printf("%d",queue);
        }
    }
}