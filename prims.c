//PRIMS
//MST
#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,j;
printf("enter the number of node");
scanf("%d",&n);
int A[n][n],V[n],u,v,min=999,cost=0,e=1;
printf("enter the adjacency matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&A[i][j]);
}
}
for(i=0;i<n;i++)
{
V[i]=0;//initially setting visited array as 0
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{
if(A[i][j]==0)
A[i][j]=999;
if(A[i][j]<min)
{
min=A[i][j];
u=i;
v=j;
}
}
V[u]=1;
V[v]=1;
cost=cost+A[u][v];
A[u][v]=999;
printf("edges:%d %d",u,v);
while(e<n-1)
{
min=999;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(V[i]==1)
{
if(A[i][j]<min)
{
if(V[j]!=1)
{
min=A[i][j];
u=i;
v=j;
}
}
}
}
}
cost=cost+min;
A[u][v]=999;
e=e+1;
V[v]=1;
printf("\nminimum cost tree\n");
printf("%d %d",u,v);
}
printf("\ncost=%d",cost);
}
