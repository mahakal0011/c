#include<stdio.h>
int calSum(int x,int y,int z);
int main()
{
    int a,b,c,d;
  printf("Enter the 3 numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  d=calSum(a,b,c);
  printf("The total%d",d);
  return 0;

}
int calSum(int x, int y, int z){
    int sum=x+y+z;
    return sum;


}