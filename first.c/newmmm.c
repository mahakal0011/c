#include<stdio.h>
float prize(int x,int y,int z);
int main()
{
   int x,y,z;
   printf("Enter 3 numbers");
   scanf("%d%d%d",&x,&y,&z);
   float d=prize(x,y,z);
   printf("%d",d);
}
float prize(int x,int y,int z)
{
float prize=(x+y+z)+((x+y+z)*1.8);
return prize;
}