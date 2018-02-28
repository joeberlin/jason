#include<stdio.h>
#include<conio.h> 
void main()
{
int n;
clrscr();
{ 
printf("Enter the number\n");
scanf("%d", &n);
} 
if(n%2==0)
{
printf(" the given number is Even\n");
}
else
{
printf("the given number is odd\n");
}
getch();
} 
