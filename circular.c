//CIRCULAR INSERTION
#include<stdio.h>
#include<stdlib.h>
void main()
{
struct node
{
int data;
struct node *next;
};
struct node *newnode,*temp,*head;
int choice;
choice=1;
head=0;
while(choice)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the data to insert");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==0)
{
head=temp=newnode;
}
else
{
temp->next=newnode;
}
temp=newnode;
newnode->next=head;
printf("do you want to continue(0/1)?"); 
scanf("%d",&choice);
}
temp=head;
while(temp->next!=head)
{
printf("%d",temp->data);
temp=temp->next;
}
printf("%d",newnode->data);
}


