#include<iostream.h>
#include<conio.h>
int reversDigits(int num)
{
int rev_num=0;
while(num>0)
{
rev_num=rev_num*10+num%10;
num=num/10;
}
return rev_num;
}
void main()
{
int num=4562;
cout<<"Reverse of no"<<"is"<<reversDigits(num));
getch();
}
