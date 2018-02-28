#include<stdio.h>
#include<conio.h>
int findLongestzeros(int n)
{
int a=0;
int count=0;
while(n)
{
if((n&1)==0)
{
count++;
if(count>a)
a=count;
}
else
count=0;
n=n>>1;
}
return a;
}
void main()
{
printf("%d",findLongestzeros(133));
getch();
}
