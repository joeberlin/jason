#include<iostream.h>
#include<conio.h>
void main()
{
int k,b;
cout <<"Enter two numbers:";
cin>>k>>b;
while(k!=b)
{
if(k>b)
k-=b;
else
k-=b;
}
cout <<"HCF="<<k;
getch();
}
