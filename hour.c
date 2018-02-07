#include<stdio.h>
#include<conio.h>
void main()
{
int years,weeks,days;
printf("enter the days");
scanf("%d",&days);
years=days/365;
weeks=(days-(years*365))/7;
days=days-((year*365)+(weeks*7));
printf("%d" years);
printf("%d" weeks);
printf("%d" days);
getch();
}

