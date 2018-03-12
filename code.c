#include<stdio.h>
#include<conio.h>
void main()
{
char ev[20],od[20],str[40];
int i,j,k;
printf("enter the string:");
gets(str);
while(str[i]!='\0')
{
if(i%2==0)
ev[j++]=str[i];
else
od[k++]=str[i];
}
printf("the odd position and even  position  string is %s%s",od,ev);
getch();
}
