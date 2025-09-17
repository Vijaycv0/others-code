#include<stdio.h>
void main()
{
int a,fact=1,n=1;
clrscr();
printf("enter a number");
scanf("%d",&a);
while(n<=a)
{
fact=fact*n;
n=n++;
}
printf("factorial =""%d",fact);
getch();
}