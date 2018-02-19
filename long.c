#include<stdio.h>
#include<conio.h>
void main()
{
long long s;
int count=0;
clrscr();
printf("Enter an integer:");
scanf("%lld", &s);
while(s!= 0)
{
s/=10;
++count;
}
printf("Number of digits: %d",count);
getch();
}
