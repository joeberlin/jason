#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
printf("Enter five numbers: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
printf("Largest number is: %d\n",largestNumber(a,b,c,d,e));
}
int largestNumber(int a,int b, int c,int d,int e)
{
int largest=0;
if(a>b && a>c && a>d && a>e)
largest=a;
else if(b>a && b>c && b>d &&b>e)
largest=b;
else if(c>a && c>b && c>d && c>e)
largest=c;
else if(d>a && d>b && d>c && d>e)
largest=d;
else
{
largest =e;
return largest;
}
getch();
}

