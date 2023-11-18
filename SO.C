//STACK OPERATION
#include<stdio.h>
#include<conio.h>
#define max 5
int stack[max];
int top=-1;
void push();
void pop();
void display();
void peak();
void main()
{
int ch;
clrscr();
while(1)
{
printf("********STACK OPERATION********\n");
printf("1.Push\n2.Pop\n3.Display\n4.Peak\n5.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:peak();
break;
case 5:exit(0);
break;
default:printf("Invalid Input");
break;
}
getch();
}
}
void push()
{
int item;
clrscr();
if(top==max-1)
printf("Stack is Full");
else
printf("Enter the element to stack\n");
scanf("%d",&item);
top=top+1;
stack[top]=item;
getch();
}
void pop()
{
int i;
if(top==-1)
printf("Stack is Empty");
else
printf("Popped element is %d\t",stack[top]);
top=top-1;
getch();
}
void display()
{
int i;
if(top==-1)
printf("Stack is Empty");
else
for(i=top;i>=0;i--)
printf("%d",stack[i]);
getch();
}
void peak()
{
int i;
if(top==-1)
printf("Stack is Empty");
else
printf("%d",stack[top]);
}






