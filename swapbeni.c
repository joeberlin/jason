#include <stdio.h>
#include<conio.h>
#include <string.h>
void swap(int*, int *);
void main()
{
int a,b;
printf("\nEnter two numbers:");
scanf("%d%d",&a,&b);
printf("\nThe numbers before swapping are num1= %d num2 = %d",a,b);
swap(&a,&b);        
printf("\nThe numbers after swapping are Num1= %d Num2 = %d",a,b);
}
void swap(int *s, int *k)
{
*s=*s^*k;
*k=*s^*k;
*s=*s^*k;
getch();
}
