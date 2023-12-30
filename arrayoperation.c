#include<stdio.h>
#include<stdlib.h>
int a[10],n,i,ch;
void display();
void insertion();
void deletion();
void main()
{
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("1.display\n2.insertion \n3.deletion\n4.exit");
printf("\nenter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:display();
break;
case 2:insertion();
break;
case 3:deletion();
break;
case 4:exit(0);
break;
default:printf("invalid input");
break;
}
}
void display()
{
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void insertion()
{
int element,p;
printf("Enter the element to insert\n");
scanf("%d",&element);
printf("Enter the position to insert the element\n");
scanf("%d",&p);
for(i=n;i>=p;i--)
a[i]=a[i-1];
a[i]=element;
n++;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
void deletion()
{
int pos;
printf("enter the position to delete");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
a[i]=a[i+1];
n--;
for(i=0;i<n;i++)
printf("%d",a[i]);
}
