#include<iostream.h>
#include<conio.h>
void main()
{
int a,i,count;
cout<<"enter the number";
cin>>a;
int b,c;
cout<<"enter the limits";
cin>>b>>c;
for(i=0;i<c;i++)
{
if(a==(b+1))
{
count=1;
cout<<"yes";
}
else
{
count=0;
cout<<"no";
}
}
getch();
}
