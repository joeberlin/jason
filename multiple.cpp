#include<iostream.h>
#include<conio.h>
void main()
{
int s;
cout<<"\n enter the number";
cin>>s;
if((s%13)==0)
{
cout<< is a nearset greater multiple of 13"<<s+13;
}
else
{
do
{
s++;
}
while((s%13)!=0);
{
cout<<is a nearset greater multiple of 13"<<s;
}
}
getch();
}
