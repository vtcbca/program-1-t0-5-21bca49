/*write a program to enter any number and check armstrong number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,x,r,sum=0;
	clrscr();
	printf("enter the number:");
	scanf("%d",&a);
	x=a;
	while(x!=0)
	{
		r=x%10;
		sum=sum+r*r*r;
		x=x/10;
	}
	  if (sum==a)
		 printf("%d is armstrong number",a);
	  else
		printf("%d is not armstrong number",a);
	  getch();
}