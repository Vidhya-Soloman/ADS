//CIRCULAR LINKED LIST
//DELETION

#include<stdio.h>
#include<stdlib.h>
void display();
void pos();
void begin();
void end();
struct node
{
int data;
struct node *next;
};
struct node *temp,*head,*newnode;
void main()
{
int choice=1;
int ch;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
newnode->next=NULL;
printf("Enter the data: ");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=temp=newnode;
newnode->next=head;
}
else
{
temp->next=newnode;
temp=newnode;
newnode->next=head;
}
printf("Do you want to continue: ");
scanf("%d",&choice);
}
printf("\n1.Display\n2.Pos\n3.Begin\n4.End\n5.Exit\n");
printf("Enter the choice: ");
scanf("%d",&ch);
switch(ch)
{
case 1:display();
break;
case 2:pos();
display();
break;
case 3:begin();
display();
break;
case 4:end();
display();
break;
case 5:exit(0);
break;
default:printf("Invalid input");
break;
}
}
void display()
{
temp=head;
while(temp->next!=head)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",temp->data);
}
void pos()
{
int pos;
int i=1;
struct node *nextnode;
printf("Enter the position: ");
scanf("%d",&pos);
temp=head;
while(i<pos-1)
{
temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
}

//CIRCULAR LL DELETE AT BEG
void begin()
{
temp=head;
while(temp->next!=head)
{
temp=temp->next;
}
temp->next=head->next;
free(head);
head=temp->next;
}

//CIRCULAR LL DELETE AT END 
void end()
{
struct node *prev;
temp=head;
while(temp->next!=head)
{
prev=temp;
temp=temp->next;
}
prev->next=head;
free(temp);
}
