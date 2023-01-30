#include<stdio.h>
int fact(int);
int main()
{
 int num,res;
printf("enter the number");
scanf("%d",&num);
res=fact(num);
printf("factorial is %d",res);
return 0;
}
int fact(int n)
{
if(n==0||n==1)
return 1;
else
return n*fact(n-1);
}

