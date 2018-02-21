#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,num;
float Average;
printf("\n Enter the number");
scanf("%d",&n);
printf("\nEnter the elements one by one");
for(i=0;i<n;++i)
{
scanf("%d",&num);
}
Average=num/n;
printf("\nAverage of the %d Numbers");
scanf("%f",n, Average);
getch();
}
