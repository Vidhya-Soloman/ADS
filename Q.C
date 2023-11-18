//queue operations
#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max],i;
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
void main()
{
int ch;
clrscr();
while(1)
{
printf("QUEUE OPERATIONS\n");
printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch (ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("Invalid Input\n");
break;
}
}
}
void enqueue()
{
int e;
printf("enter the element to insert\t");
scanf("%d",&e);
if(rear==max-1)
{
printf("Queue if full\n");
}
else if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=e;
}
else
{
rear++;
queue[rear]=e;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
printf("Queue is empty\n");
else if(front==rear)
{
printf("%d is deleted\n",queue[front]);
front=rear=-1;
}
else
{
printf("%d is deleted\n",queue[front]);
front=front+1;
}
}
void display()
{
if(front==-1&&rear==-1)
printf("Queue is empty\n");
else
{
for(i=front;i<rear+1;i++)
printf("%d\t",queue[i]);
}
getch();
}


