#include<stdio.h>
void main()
{
int num,n,sum=0,rev=0,r;
printf("enter the num");
scanf("%d", &num);
n=num;
while(n>0)
{
r=n%10;
sum=sum+r;
rev=rev*10+r;
n=n/10;
}
if(num==rev)
printf("It is a palindrome");
else
printf("Not a palidrome");
return;
}
