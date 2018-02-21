#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter numbers: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
printf("Largest number is: %d\n",largestNumber(a,b,c));
}
int largestNumber(int a,int b, int c)
{
int largest=0;
if(a>b && a>c)
largest=a;
else if(b>a && b>c)
largest=b;
else if(c>a && c>b)
largest=c;
else
{
printf("invalid");
}
getch();
}

