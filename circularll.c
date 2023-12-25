//CIRCULAR LL OPERATIONS
#include<stdio.h>
#include<stdlib.h>
void display();
void insertion();
void deletion();
void search();
struct node
{
int data;
struct node *next;
};
struct node *temp,*newnode,*head;
void main()
{
int ch;
int choice=1;
head=0;
while(choice)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->next=0;
printf("Enter the data");
scanf("%d",&newnode->data);
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
temp=newnode;
}
temp->next=head;
printf("do you want to continue(0/1)");
scanf("%d",&choice);
}
printf("1.Display\n2.Insertion\n3.Delettion\n4.Search\n5.Exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:display();
break;
case 2:insertion();
display();
break;
case 3:deletion();
display();
break;
case 4:search();
break;
case 5:exit(0);
break;
default:printf("invalid input");
break;
}
}
void display()
{
temp=head;
if(head==0)
{
printf("empty");
}
else
{
while(temp->next!=head)
{
printf("%d",temp->data);
temp=temp->next;
}
}
printf("%d",temp->data);
}
void insertion()
{
int pos,i=1;
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert");
scanf("%d",&newnode->data);
printf("enter the position");
scanf("%d",&pos);
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
}
void deletion()
{
struct node *prev;
int pos,i=1;
temp=head;
printf("Enter the position to delete");
scanf("%d",&pos);
while(i<pos)
{
prev=temp;
temp=temp->next;
i++;
}
prev->next=temp->next;
free(temp);
}
void search()
{
int t,e;
printf("enter the element to be searched");
scanf("%d",&e);
temp=head;
while(temp->next!=head)
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
if(temp->data==e)
{
printf("element %d found in the list",e);
}
}
else
{
printf("element not found");
}
}