#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[200];
int count = 0,1;
{
printf("enter the string");
scanf("%s", s);
for(i = 0;s[i]!=0;i++)
{
if(s[i] == ' ')
count++;    
}
printf("number of words in given string are: %d\n", count + 1);
}
getch();
}
