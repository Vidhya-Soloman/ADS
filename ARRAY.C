#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],n,i;
clrscr();
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
//print
for(i=0;i<5;i++)
printf("%d\t",a[i]);
getch();
return 0;
}
