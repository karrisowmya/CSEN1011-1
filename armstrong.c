#include<stdio.h>
int main()
{
int n,n1,s=0,r;
printf("Enter a three digit number:");
scanf("%d",&n);
n1=n;
while(n1!=0)
{ 
r+n1%10;
s=s+(r*r*r);
n1/=10;
}
if(n==s)
{
  printf("%d is an ARMSTRONG number",s);}
  else{printf("%d is AN ARMSTRONG number.",s);
  }
return 0;
}
