//array operations
#include<stdio.h>
#include<conio.h>
int a[10],i,n,ch;
void printing();
void search();
void sorting();
void insertion();
void deletion();
void main()
{
clrscr();
printf("Enter the number of elements\n");
scanf("%d",&n);
printf("Enter the elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("**********ARRAY OPERATIONS**********\n");
printf("1.Printing\n2.Search\n3.Sorting\n4.Insertion\n5.Deletion\n6.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printing();
break;
case 2:search();
break;
case 3:sorting();
break;
case 4:insertion();
break;
case 5:deletion();
break;
case 6:exit(0);
break;
default:printf("Invalid Input");
}
getch();
}
void printing()
{
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}

void search()
{
int s;
printf("Enter the element to search\n");
scanf("%d",&s);
for(i=0;i<n;i++)
{
if(a[i]==s)
break;
}
if(i<n)
printf("Element %d found at position %d",s,i+1);
else
printf("Element not found");
}
void sorting()
{
int t,j;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
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
getch();
}
void deletion()
{
int p;
printf("Enter the position to delete\n");
scanf("%d",&p);
for(i=p-1;i<n;i++)
a[i]=a[i+1];
n--;
for(i=0;i<n;i++)
printf("%d",a[i]);
getch();
}



