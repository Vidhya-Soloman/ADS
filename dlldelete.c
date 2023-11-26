//DOUBLY LINKED LIST DELETION
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
struct node *temp;
if(head==0)
{
printf("list is empty");
}
else
{
temp=head;
head=head->next;
head->prev=0;
free(temp);
}
}
void end()
{
struct node *temp;
if(tail==0)
printf("empty");
else
{
temp=tail;
tail->prev->next=0;
tail=tail->prev;
free(temp);
}
}
void pos()
{
int pos,i=1;
printf("Enter position: ");
scanf("%d",&pos);
if(pos<1)
{
printf("empty");
} 
else
{
temp=head;
while(i<pos)
{
temp=temp->next;
i++;
}
temp->prev->next = temp->next;
temp->next->prev = temp -> prev;
free(temp);
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
