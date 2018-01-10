#include<stdio.h>
#include<conio.h>
void main()
{
char c;
char lowercase level,uppercase level;
{
printf("enter the alphabet");
scanf("%c" &c);
}
lowercase level ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
uppercase level ( c ==  'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(lowercase level || uppercase level)
{
printf("enter the alphabet are vowel");
else
printf("enter the alphabet are not vowel");
}
getch();
}
