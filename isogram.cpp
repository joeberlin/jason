#include<iostream.h>
#include<conio.h>
void main()
{
int i,flag=0;
char ch[100];
cout<<"Enter the String:";
cin>>ch;
for(i=0;ch[i]!='\0';i++)
{
if(ch[i]==ch[i+1])
{
flag=1;
break;
}
}
if(flag==1)
{
cout<<"The given string is not isogram";
}
else
{
cout<<"The given string is isogram";
}
getch();   
}
