#include<stdio.h>
#include<math.h>
void main()
{
int sum=0,n,x,i;
printf("Enter the values of x and n");
scanf("%d %d", &x, &n);
if(n>=0)
{
for(i=0;i<=n;i++)
{
sum=sum+pow(x,i);
}
printf("Gp sum is %d",sum);
}
else
printf("Enter valid value of n");
return;
}
