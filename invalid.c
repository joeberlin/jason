#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number a");
scanf("%d",&a);
if(a!=0)
{
a++;
printf("%d",a);
}
else
{
printf("invalid");
}
getch();
}
