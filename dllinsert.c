//DOUBLY LINKED LIST INSERTION 
#include<stdio.h>
#include<stdlib.h>
void begin();
void end();
void pos();
void display();
struct node 
{
int data;
struct node *next;
struct node *prev;
};
struct node *head,*tail,*newnode,*temp;
void main()
{
int choice;
  choice=1;
head=0;
int ch;
while(choice)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->next=0;
printf("Enter data to insert");
scanf("%d",&newnode->data);
newnode->prev=0;
newnode->next=0;
if(head==0)
{
head=tail=newnode;
}
else
{
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
printf("Do you want to continue(1/0):");
scanf("%d",&choice);
}
printf("1.Begin\n2.End\n3.Pos\n4.Display\n5.Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:begin();
display();
break;
case 2:end();
display();
break;
case 3:pos();
display();
break;
case 4:display();
break;
case 5:exit(0);
break;
default:printf("Invalid input");
break;
}
}
void begin()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=0;
head->prev=newnode;
newnode->next=head;
head=newnode;
}
void end()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter data");
scanf("%d",&newnode->data);
newnode->next=0;
newnode->prev=0;
tail->next=newnode;
newnode->prev=tail;
tail=newnode;
}
void pos()
{
int pos;
int i=1;
printf("Enter the poition to insert");
scanf("%d",&pos);
if(pos<1)
{
printf("invalid position");
}
else
{
struct node *newnode,*temp;
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter data");
scanf("%d",&newnode->data);
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->prev=temp;
newnode->next=temp->next;
temp->next=newnode;
newnode->next->prev=newnode;
}
}
void display()
{
temp=head;
while(temp!=0)
{
printf("%d",temp->data);
temp=temp->next;
}
}
