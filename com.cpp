#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,c=0;
cout<<"Enter a number \n";
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
c=c+1;
}
if (c==2)
cout<<"The number is PRIME";
else
cout<<"The number is COMPOSITE";
getch();
}
