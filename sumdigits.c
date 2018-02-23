#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,sum;
int a,b,c;
clrscr();
printf("\n enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
{
num1=a%1000;
num2=b%100;
num3=c%10;
sum=(num1+num2+num3);
printf("\n sum of all digits:%d",sum);
}
getch();
}
