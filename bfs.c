#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1;
int max=10;
int a[10];
void enqueue(int n)
{
int val;
if(rear==max-1)
return;
if(rear==-1)
front=0;
rear++;
a[rear]=n;
}
int dequeue()
{
if(front==-1)
return -1;
int v=a[front];
front++;
return v;
}


void main()
{
int n,start;
printf("enter the number of nodes");
scanf("%d",&n);
int a[n][n],v[n],i,j;
printf("enter the adj matrix");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
for(i=0;i<n;i++)
{
v[i]=0;
}
printf("enter the starting node(0-%d)",(n-1));
scanf("%d",&start);
enqueue(start);
v[start]=1;
while(front<=rear)
{
start=dequeue();
printf("%d",start);
for(i=0;i<n;i++)
if(a[start][i]==1 && v[i]==0)
{
enqueue(i);
v[i]=1;
}
}
}