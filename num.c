#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[100];
printf("Enter number of element ");
scanf("%d", &n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
printf("%d %d",a[i],i);
printf("\n");
}
getch();	
}
