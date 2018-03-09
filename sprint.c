#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
while(n>0)
{
x=n%10;
if(x%2!=0)
{
printf("%d ",x);	
}
n=n/10;
}
getch();    
}
