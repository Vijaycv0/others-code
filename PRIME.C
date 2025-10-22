#include<stdio.h>
void main()
{
int a,i,flag=0;
clrscr();
printf("enter the number:");
scanf("%d",&a);
for(i=2;i<a;i++);
{
	if(n%i==0)
	{
		flag=1;
		break;
	}
}
if(flag==1)
printf("the number is not prime");
else
printf("the number is prime");
getch();
}