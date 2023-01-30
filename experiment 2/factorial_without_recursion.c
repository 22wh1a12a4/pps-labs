#include<stdio.h>
int factorial(int);
int main()
{
int fact,num;
printf("enter the number");
scanf("%d",&num);
fact=factorial(num);
printf("the factorial of given number is %5d",fact);
}
int factorial(int num)
{
int i,fact=1;
for(i=1;i<=num;i++)
{
fact=fact*i;
}
return fact;
}

