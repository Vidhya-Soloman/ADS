//STACK USING ARRAY
//PUSH POP DISPLAY PEEK EXIT 
#include<stdio.h>
#include<stdlib.h>
#define max 5
void push();
void pop();
void display();
void peek();
void search();
int stack[max],top=-1;
void main()
{
int ch;
while(1)
{
printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Search\n6.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
display();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:peek();
break;
case 5:search();
break;
case 6:exit(0);
break;
default:printf("invalid input");
break;
}
}
}
void push()
{
int e;
if(top==max-1)
{
printf("stack is full");
}
else
{
printf("Enter the element to push into stack");
scanf("%d",&e);
top=top+1;
stack[top]=e;
}
}
void pop()
{
if(top==-1)
{
printf("Stack is empty");
}
else
{
printf("The popped element: %d",stack[top]);
top--;
}
}
void display()
{
int i;
if(top==-1)
{
printf("Stack is empty");
}
else
{
printf("Entered elements are:");
for(i=top;i>=0;i--)
printf("%d",stack[i]);
}
}
void peek()
{
if(top==-1)
printf("stack is empty");
else
printf("%d",stack[top]);
}
void search()
{
int i;
int e,t;
if(top==-1)
printf("stack is empty");
else
printf("Enter the element to be searched:");
scanf("%d",&e);
for(i=top;i>0;i++)
{
if(stack[i]==e)
{
t=1;
break;
}
}
if(t==1)
{
printf("Element found");
}
else
{
printf("Element not found");
}
}