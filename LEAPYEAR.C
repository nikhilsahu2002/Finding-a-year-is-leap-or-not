#include<stdio.h>
#include<conio.h>
void main()
{
int year=1900;
clrscr();
if (year %4==0 && year%400==0)
printf("Year is Leap Year");
else if(year %100 == 0)
printf("Year is Not a Leap Year");
else
printf("Not A Leap Year");
getch();
}




