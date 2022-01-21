/*write a program to enter any number and print it in reverse
date:-16/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,reverse=0;
   clrscr();
   printf("\n\t enter a reverse number:");
   scanf("%d",&a);
   while(a!=0)
   {
   reverse=reverse*10;
   reverse=reverse+a%10;
   a=a/10;
   }
   printf("\n\t%d is Reverse number ",reverse);
   getch();
}