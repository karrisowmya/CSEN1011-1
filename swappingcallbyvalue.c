// Call by value swap function.
#include<stdio.h>
int swap(int x, int y){
  int temp;
  temp=x;
  x=y;
  y=temp;
  printf("After swap %d %d",x,y);
}
int main()
{
  int a=30,b=20;
  printf("Before swap %d %d",a,b);
  printf("\n");
  swap(a,b);
}
/*
Output:
Before swap 30 50
After swap 50 30
*/
