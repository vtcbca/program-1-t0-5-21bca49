/*write a program to enter and check wheter it is a prime number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,i=2,c=0;
  clrscr();
  printf("\n\t enter the value:");
  scanf("%d",&no);
  while (i<no)
  {
       if(no%i==0)
       {
	c=1;
	}
       break;
       }
       i=i+1;
       if(c==1)
       {
	 printf("%d is not prime number",no);
	 }
	else
	{
	 printf("%d is prime number",no);
	 }
	getch();
}

