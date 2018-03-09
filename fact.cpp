#include<iostream.h>
#include<conio.h>
void main()
{
int n,i;
cout<<"Enter the number:";
cin>>n;
cout<<"The factors are:";
for(i=1;i<=n;i++)
{
if((n%i)==0)
{
cin>>i;
}
}
getch();
}
