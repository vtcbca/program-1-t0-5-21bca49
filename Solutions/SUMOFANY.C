/*write a program to enter any number and print sum of its digits
date:-22/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int a,n,sum=0;
 clrscr();
 printf("\n enter the value:");
 scanf("%d",&a);
 while(a>0)
 {
	 n=a%10;
	 sum=sum+n;
	 a=a/10;
 }
  printf("\n sum of number is %d",sum);
 getch();
 }