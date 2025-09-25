#include<stdio.h>
void main()
{
int a,b,c,l1,l2;
clrscr();
if(a>b && a>c)
{
 l1=a;
 l2=(b>c)?b:c;
}else if(b>a && b>c)
{
 l1=b;
 l2=(a>c)?a:c;
}else
 l1=c;
 l2=(a>b)?a:c;
}
printf("largest=%d",l1);
printf("second largest=%d",l2);
getch();
}