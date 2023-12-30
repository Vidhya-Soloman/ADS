#include<stdio.h>
void main()
{
int n,m,k=0,i;
printf("Enter number of elements of 1st array:");
scanf("%d",&n);
printf("Enter number of elements of 2nd array:");
scanf("%d",&m);
int a[n],b[m];
printf("Enter the 1st elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the 2nd elements:");
for(i=0;i<m;i++)
scanf("%d",&b[i]);


//MERGING
for(i=n;i<(n+m);i++)
{
a[i]=b[k];
k++;
}
printf("Merged array:");
for(i=0;i<(n+m);i++)
printf("%d",a[i]);
}