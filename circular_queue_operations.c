//CIRCULAR QUEUEUE OPERATIONS
//ENQUEUE DEQUEUE DISPLAY
#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1,i;
void insertion();
void deletion();
void display();
void main()
{
int ch;
while(1)
{
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:insertion();
break;
case 2:deletion();
break;
case 3:display();
break;
case 4:exit(0);
break;
default:printf("invalid input");
break;
}
}
}
void insertion()
{
int e;
printf("Enter the element:");
scanf("%d",&e);
if((rear+1%max)==front)
printf("queue is full");
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

void deletion()
{
if(front==-1&&rear==-1)
printf("empty");
else if(front==rear)
{
printf("The deleted element is %d",queue[front]);
front=rear=-1;
}
else
{
printf("the deleted element is %d",queue[front]);
front=(front+1)%max;
}
}
void display()
{
i=front;
if(front==-1 && rear==-1)
printf("empty");
else
{
printf("Elements in the queue: ");
while(i!=rear)
{
printf("%d",queue[i]);
i=(i+1)%max;
}
}
printf("%d",queue[rear]);
}