#include<stdio.h>
#include<conio.h>
void main()
{
char str[30];
int i=0,count=0;
printf("enter the string");
scanf("%s",&str);
while(str[i]!=0)
{
if(str[i])
{
++count;
}
++i;
}
printf("no of digits is %d ",count);
}
