#include<stdio.h>
#include<stdlib.h>
void display();
void search();
struct node 
{
int data;
struct node *next;
};
struct node *head,*newnode,*temp;
void main()
{
int choice;
int ch;
head=NULL;
while(choice)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->next=NULL;
printf("enter the data");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
printf("do you want to continue?(0/1)");
scanf("%d",&choice);
}
temp=head;
while(temp!=NULL)
{
temp=temp->next;
}
printf("1.disp\n2.search\n3.exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:display();
break;
case 2:search();
break;
case 3:exit(0);
break;
default:printf("invalid input");
break;
}
}
void display()
{
printf("entered data:");
temp=head;
while(temp!=NULL)
{
printf("%d",temp->data);
temp=temp->next;
}
}
void search()
{
int e,t;
temp=head;
printf("enter the element to search");
scanf("%d",&e);
while(temp!=0)
{
if(temp->data==e)
{
t=1;
break;
}
temp=temp->next;
}
if(t==1)
{
printf("Element %d is in the list",e);
}
else
{
printf("not present");
}
}
