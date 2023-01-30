#include<stdio.h>
void main(){
    int a,b,c,max,min;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    max=a>b?(a>c?a:c):(b>c?b:c);
    min=a<b?(a<c?a:c):(b<c?b:c);
printf("the maximum number is %d\n",max);
printf("the minimum number is %d\n",min);
return;
}
