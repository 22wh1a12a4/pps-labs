#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp,*fp1;
int i,n;
fp=fopen("fir.txt","w");
if(fp==NULL)
{
printf("file cannot be created");
exit(1);
}
else
{
for(i=1;i<=10;i++)
{
putw(i,fp);
}}
fclose(fp);
fp1=fopen("fir.txt","r");
for(i=1;i<=10;i++)
{
n=getw(fp1);
printf("%5d",n);
}
fclose(fp1);
return 0;
}

