#include <stdio.h>
#include<conio.h>
void main()
{
 int n,a = 0, remainder, b;
 printf("Enter an integer: ");
 scanf("%d", &n);
 b = n;
 while( n!=0 )
 {
  remainder = n%10;
 a= a*10 + remainder;
   n /= 10;
  }
  if (b ==a)
  {
  printf("%d is a palindrome.", b);
  }
  else
  {
   printf("%d is not a palindrome.",b);
   }
   getch();
   }
    
   
