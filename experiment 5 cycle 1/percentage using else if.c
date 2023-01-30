#include<stdio.h>
void main(){
 int percentage;
 printf("enter the percentage");
 scanf("%d",&percentage);
  if(percentage>=70)
printf("distinction");
else if(percentage>=60&&percentage<70)
printf("first class");
else if(percentage>=40&&percentage<60)
printf("second class");
else if (percentage<40)
printf("fail");
else{
printf("enter the percentage between 1 to 100");
}
printf("percentage obtained is %d",percentage);
return ;







}
