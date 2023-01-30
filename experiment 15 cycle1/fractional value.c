#include<stdio.h>
#include<math.h>
int main()
{
int x,i,j;
float sum=1;
printf("enter the value of x");
scanf("%d",&x);
for(i=1,j=2,i<3;j<=6;i++,j=j+2)
{
sum=sum+pow(-x,i)/j;
}
printf("sum is %f",sum);
return 0;
}
