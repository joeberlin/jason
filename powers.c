#include<stdio.h>
#include<conio.h>
void main()
{
int b;
clrscr();
printf("\n enter the number");
scanf("%d",&b);
if((b%2)==0)
{
printf("%d is a nearset greater multiple of 2",b+2);
}
else
{
do
{
b++;
}
while((b%2)!=0);
{
printf("%d is a nearset greater multiple of 2",b);
}
}
getch();
}
