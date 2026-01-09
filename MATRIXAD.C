#include<stdio.h>
void main()
{
int a[10][10],b[10][10],c[10][10];
int i,j,r1,r2,c1,c2;
clrscr();
printf("enter the raw and column of first matrix");
scanf("%d%d",&r1,&c1);
printf("\nenter the raw and column of second matrix:");
scanf("%d%d",&r2,&c2);
if((r1!=r2) || (c1!=c2))
{
 printf("the matrix should be same raw or column number:");
 exit(0);
}
 printf("enter the first matrix elements:");
 for(i=0;i<r1;i++)
 for(j=0;j<c1;j++)
{
 scanf("%d",&a[i][j]);
}
 printf("enter the second matrix elements:");
 for(i=0;i<r2;i++)
 for(j=0;j<c2;j++)
{
 scanf("%d",&b[i][j]);
}
 for(i=0;i<r1;i++)
 for(j=0;j<c1;j++)
{
 c[i][j]=a[i][j]+b[i][j];
}
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 printf("%d\t",c[i][j]);
 }
 printf("\n");
 }

getch();
}