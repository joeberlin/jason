#include<stdio.h>
#include<conio.h>
void main
{
int a,b,c;
scanf("%d",&a);
scanf("%d %d",&b,&c);
switch(a)
{
case 1:
printf("%d",b/c);
break;
case 2:
printf("%d",b%c);
break;
default:
printf("no operations");
break;
}
getch();	
}
