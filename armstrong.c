#include <stdio.h>
#include<conio.h>
void main()
{
int no, a, remainder, result = 0;
printf("Enter a three digit integer: ");
scanf("%d", &no);
a= no;
while (a != 0)
{
remainder = a%10;
result += remainder*remainder*remainder;
a /= 10;
}
if(result == no)
printf("%d is an Armstrong number.",no);
else
printf("%d is not an Armstrong number.",no);
getch();
}














    
