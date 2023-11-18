//merge 2 arrays
#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[10],i;
clrscr();
printf("enter the elements");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("enter the elements");
for(i=0;i<5;i++)
scanf("%d",&b[i]);
printf("the merged array is\n");
for(i=0;i<5;i++)
{
c[i]=a[i];
c[i+5]=b[i];
}
for(i=0;i<10;i++)
printf("%d\t",c[i]);
getch();
}
