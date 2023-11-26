//insertion
#include<stdio.h>
#include<stdlib.h>
void begin();
void end();
void pos();
void display();
int count;
struct node
{
int data;
struct node *next;
};
struct node *head,*newnode,*temp;
void main()
{
int choice;
head=0;
int ch;
while(choice)
{
newnode=(struct node *)malloc(sizeof(struct node));
newnode->next=0;
printf("Enter data to insert: ");
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
printf("do you want to continue(1/0):");
scanf("%d",&choice);
}
temp=head;
while(temp!=0)
{
temp=temp->next;
}
printf("1.Begin\n2.End\n3.Pos\n4.Display\n5.Exit\n");
printf("Enter your choice");
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
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert at beginning");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
}
void end()
{
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert at the end");
scanf("%d",&newnode->data);
newnode->next=0;
while(temp->next!=0)
{
temp=temp->next;
}
temp->next=newnode;
}
void pos()
{
int pos,i=1;
temp=head;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data to insert at a given position");
scanf("%d",&newnode->data);
newnode->next=0;
printf("Enter the position you want to insert");
scanf("%d",&pos);
while(i<pos-1)
{
temp=temp->next;
i++;
}
newnode->next=temp->next;
temp->next=newnode;
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









