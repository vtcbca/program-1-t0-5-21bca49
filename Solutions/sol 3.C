/*write a program to enter anynumber check if number is palindrome or not*/
#include<stdio.h>
#include<conio.h>
void main()
{ int n,r,sum=0,b;
  clrscr();
  printf("enter the number:");
  scanf("%d",&n);
  b=n;
  while(n>0)
  {
	  r=n%10;
	 sum=(sum*10)+r;
	 n=n/10;
  }
  if (b==sum)
       printf("%d is palindrome number",sum);
  else
      printf("%d is not palidrome number",sum);
  getch();
}
