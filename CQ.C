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
printf("\nCIRCULAR QUEUE OPERATIONS\n");
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
printf("Enter the element to insert\n");
scanf("%d",&e);
if(((rear+1)%max)==front)
printf("Queue is Full\n");
else if(front==-1&&rear==-1)
{
front=rear=0;
queue[rear]=e;
}
else
{
rear=(rear+1)%max;
queue[rear]=e;
}
}
void dequeue()
{
if(front==-1&&rear==-1)
printf("Queue is Empty\n");
else if(front==rear)
{
printf("The deleted element is %d\n",queue[front]);
front=rear=-1;
}
else
{
printf("The deleted element is %d\n",queue[front]);
front=(front+1)%max;
}
}
void display()
{
i=front;
if(front==-1&&rear==-1)
printf("Queue is Empty\n");
else
{
while(i!=rear)
{
printf("%d\t",queue[i]);
i=(i+1)%max;
}
printf("%d",queue[rear]);
}
}


