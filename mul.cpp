#include<iostream.h>
#include<conio.h>
void main()
{
int k,n,table=1;
clrscr();
cout<<"Enter any num : ";
cin>>n;
cout<<"Table of "<<n;
for(k=1;k<=10;k++)
{
table=n*k;
cout<<" \n"<<table;
cout<<"\n";
}
if(table%7==0)
{
cout<<"yes";
}
else
cout<<"no";
getch();
}
