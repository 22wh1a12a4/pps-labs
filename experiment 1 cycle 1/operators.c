#include<stdio.h>                                                                                                                                                                                                                                                                                                                                      
void main()
{
int a,b,sum,difference,product,division,mod,greaterthan,lessthan,equal,notequal,logicalor,logicaland,logicalnot;
int bitwiseor,bitwiseand;
printf("enter the a,b");
scanf("%d%d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
division=a/b;
mod=a%b;
greaterthan=a>b;
lessthan=a<b;
equal=(a==b);
notequal=(a!=b);
logicalor=(a==b||a>b);
logicaland=(a>b&&a<b);
logicalnot=!(a!=b&&a>b);
bitwiseor=(a=b|a>b);
bitwiseand=(a=b&b<b);
printf("sum=%d\ndifference=%d\nproduct=%d\ndivision=%d\nmod=%d\ngreaterthan=%d\nlessthan=%d\nequal=%d\n",sum,difference,product,division,mod,greaterthan,lessthan,equal);
printf("notequal=%d\nlogicalor=%d\nlogicaland=%d\nlogicalnot=%d\nbitwiseor=%d\n",notequal,logicalor,logicaland,logicalnot,bitwiseor);
printf("bitwiseand=%d\n",bitwiseand);                                                 
return;
}

