#include<stdio.h>
void Namaste();
void Hello();
int main(){
    printf("Press i for indian and a for american");
    char ch;
    scanf("%c",&ch);
    if(ch=='i')
    {
        Namaste();
    }
    else
    {
        Hello();
    }
    return 0;

}
void Namaste(){
    printf("Namaste");
}
void Hello()
{
    printf("Hello");
}