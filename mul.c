#include<stdio.h>
#include<conio.h>
void main()
{
int k;
printf("\n enter the number");
scanf("%d",&k);
if((k%10)==0)
{
printf("%d is a nearset greater multiple of 10",k+10);
}
else
{
do
{
k++;
}
while((k%10)!=0);
{
printf("%d is a nearset greater multiple of 10",k);
}
}
getch();
}
