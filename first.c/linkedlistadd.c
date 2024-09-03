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
int main()

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

void insert_beg()
{
    struct node*tmp,*q =head;
    int val;
    tmp=(struct node*) malloc ( sizeof (struct node));
    printf("Enter a value");
    scanf("%d",&val);
    tmp->info=val;
    tmp->next=NULL;
    q=head;
    while (q->next!=NULL)
    {
        q=q->next;
        /* code */
    }
    q->next=tmp;
    

}