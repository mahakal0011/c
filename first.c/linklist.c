#include<stdio.h>
#include<stdlib.h>
void create();
void insert_beg();
struct node
{
    int info;
    struct node*next;
};
struct node*head=NULL;
void creat();
void insert_beg();
void main()
{
    int ch;
    while(-1)
    {
        printf("Enter 1 for create 2 for insert_beg");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:creat();/* constant-expression */
            /* code */
            break;
            case 2:insert_beg();
            break;
            case 3:exit(0);
            break;
        
        
        default:printf("wrong choice");
            break;
        }

    }
}
void creat()
{
    int val,i,n;
    struct node*tmp,*q;
    printf("\n how many node you want to create");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        tmp=(struct node*) malloc (sizeof(struct node));
        printf("\n Enter value");
        scanf("%d",&val);
        tmp->info=val;
        if(head=NULL)
        {
            head=tmp;
            tmp->next=NULL;
            q=head;
        }
        else{
            q->next=tmp;
            tmp->next=NULL;
            q=q->next;
        }

        

    }
}
void insert_beg()
{
struct node * tmp;
int val;
{
     tmp=(struct node*) malloc (sizeof(struct node));
     printf("Enter value");
     scanf("%d",&val);
     tmp->info=val;
     tmp->next=head;
     head=tmp;
}
}