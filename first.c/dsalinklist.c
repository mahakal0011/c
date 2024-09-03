#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;

while(1)
{
    int ch;
    switch (ch)
    {
    case 1: create();
        break;
    case 2: insert();
    break;
    case 3:exit(0);
    break;
        default:printf("Wrong choice");
        break;
    }
}
}



