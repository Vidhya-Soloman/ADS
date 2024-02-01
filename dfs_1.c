#include<stdio.h>
#include<stdlib.h>
void dfs(int n,int si,int a[si][si],int v[])
{
if(v[n]!=1)
{
printf("%d",n);
v[n]=1;
for(int i=0;i<si;i++)
{
if(a[n][i]==1 && v[i]==0)
dfs(i,si,a,v);
}
}
}
void main()
{
int n,start;
printf("enter the number of nodes");
scanf("%d",&n);
int a[n][n],v[n],i,j;
for(i=0;i<n;i++)
{
v[i]=0;
}
printf("enter the adjacency matrix");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("enter the starting node(0,%d):",(n-1));
scanf("%d",&start);
printf("Traversal");
dfs(start,n,a,v);
}