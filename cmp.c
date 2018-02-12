#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[10],s2[10];
int l1,l2;
clrscr();
printf("enter the s1,s2\n:");
scanf("%s%s",&s1,&s2);
l1=strlen(s1);
l2=strlen(s2);
if(l1>l2)
{
printf("%s graetest is \n :",s1);
}
else 
{
printf("\n %s  greatest is:",s2);
}
getch();
}
