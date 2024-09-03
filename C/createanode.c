#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*line;
};
int main()
{
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=45;
    head->line=NULL;

    struct node*current=NULL;
    current=(struct node*)malloc(sizeof(struct node));
    current->data=12;
    current->line=head;
    struct node*last=NULL;
    last=(struct node*)malloc(sizeof(struct node));
    last->data=36;
    last->line=current;
    
    printf("%d %d %d",last->data,current->data,head->data);
}