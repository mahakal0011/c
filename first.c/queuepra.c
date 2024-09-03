#include<stdio.h>
#include<stdlib.h>
int queue[5],f=-1,r=-1;
void rear();
void front();
void show();
void exit();
void main()
{
    int ch;
    printf("1 rear\n");
    printf("2 front\n");
    printf("show\n");
    printf("3 exit\n");
    while (1)
    {
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:rear();
            break;
        case 2: front();
        break;
        case 3: show();
        break;
        case 4: exit(0);
        break;   
        
        default:
        printf("Wrong choice\n");
            break;
        }
    }
    
    
}
void rear()
{
    int item;
    if (r=5-1)
    {
        printf("Undder flow\n");
        /* code */
    }
    else{
        if(f==-1)
        {
            f=0;
        }
        printf("Insert element in queue\n");
        scanf("%d",&item);
        r=r+1;
        queue[r]=item;
    }
    
}
void front()
{
    if(f==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("deleted %d",queue[f]);
        f=f+1;
    }
}
void show()
{
    int i;
    if(f==-1)
    {
        printf("Queue is Empty\n");
    }
    else{
        printf("Queue elements\n");
        for(i=f;i<=r;i++)
        {
            printf("%d",queue[i]);
        }
    }
}