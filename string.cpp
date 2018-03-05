#include<iostream.h>
#include<string.h>
#include<conio.h>
void main()
{
char string1[20];
int i, length;
int flag = 0;
cout<<"Enter a string";
cin>>string1;
length = strlen(string1);
for(i=0;i < length ;i++)
{
if(string1[i] != string1[length-i-1])
{
flag = 1;
break;
}
}
if(flag) 
{
cout<<"is not a palindrome"<< string1;
}    
else 
{
cout<<"is a palindrome"<<string1;
}
getch();
}
