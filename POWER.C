#include<stdio.h>
void main()
{
int s=1,a,t,n;
clrscr();
printf("enter a number=");
scanf("%d",&a);
printf("enter the power of the number=");
scanf("%d",&t);
for(n=1;n<=t;n++)
{
s=s*a;
}
printf("%d",s);
getch();
}

