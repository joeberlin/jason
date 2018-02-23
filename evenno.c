#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n enter the number");
scanf("%d",&n);
if(n%2==0)
{
printf("\n even;%d",n);
}
else
{
printf("\n nearest even no:%d",(n-1));
}
getch();
}
