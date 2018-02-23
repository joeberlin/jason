#include <stdio.h>
#include<conio.h>
void main()
{
double firstnum, secondnum, temporary;
clrscr();
printf("Enter first num: ");
scanf("%lf", &firstnum);
printf("Enter second num: ");
scanf("%lf",&secondnum);
temporary = firstnum;
firstnum = secondnum;
secondnum = temporary;
printf("\nAfter swapping:%2lf%2lf",firstnum,secondnum);
getch();
}

