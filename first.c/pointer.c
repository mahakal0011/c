#include<stdio.h>
int main()
{
  int age;
  int *ptr;

  int *ptr=30;
  *ptr=&age;


printf("%d",age);
return 0;
}