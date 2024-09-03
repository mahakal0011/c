#include<stdio.h>
void printnamaste();
void printhello();
int main()
{ 
    
    printf("Enter i for indian and a for american");
    char ch;
    scanf("%c",&ch);
    if (ch=='i')
    {
        namaste();
    }
    else
    {
        hello();
    } 
    return 0;
    }
    void namaste()
    {
        printf("namaste");
    
    }
    void hello()
    {
        printf("hello");
    }
    
    

