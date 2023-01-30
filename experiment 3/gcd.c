#include<stdio.h>
int recgcd(int,int);
int nonrecgcd(int,int);
int main()
{
int a,b,c,d;
printf("enter two numbers a,b\n");
scanf("%d%d",&a,&b);
c=recgcd(a,b);
printf("the gcd of two number using recurssion is%d\n",c);
d=nonrecgcd(a,b);
printf("the gcd of two number using nonrecursion is %d",d);
return 0;
}
int recgcd(int x,int y)
{
if(y==0)
{
return(x);
}
else
{
return(recgcd(y,x%y));
}
}
int nonrecgcd(int x,int y)
{
int z;
while(x%y!=0)
{
z=x%y;
x=y;
y=z;
}
return(y);
}

