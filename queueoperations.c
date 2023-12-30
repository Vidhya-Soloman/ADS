//QUEUE OPERATION 
//USING ARRAY
#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1;
void insertion();
void deletion();
void display();
void main()
{
int ch;
while(1)
{
printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
printf("enter the choice");
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
default:printf("invalid choice");
break;
}
}
}
void insertion()
{
int e;
printf("enter the element to be inserted");
scanf("%d",&e);
if(rear==max-1)
printf("queue is full");
if(front==-1&&rear==-1)
{
front=0;
rear=0;
queue[rear]=e;
}
else
{
rear=rear+1;
queue[rear]=e;
}
}
void deletion()
{
if(front==-1&&rear==-1)
printf("queue is empty");
else if(front==rear)
{
printf("deleted element is %d",queue[front]);
front=rear=-1;
}
else
{
printf("deleted element is %d",queue[front]);
front=front+1;
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
printf("queue is empty");
else
printf("\nentered elements are:");
for(i=front;i<=rear;i++)
printf("%d",queue[i]);
}