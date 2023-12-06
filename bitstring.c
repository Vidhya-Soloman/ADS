//BITSTRING SET DATASTRUCTURE
#include<stdio.h>
#include<stdlib.h>
#define N 5
void main()
{
int i,j,t;
int U[N]={1,2,3,4,5};
int A[N]={1,2,3};
int B[N]={1,5};
int US[N],SA[N],SB[N],CS[N],IS[N];
for(i=0;i<N;i++)
 {
  if(U[i]!=-1)//SINCE UNIVERSAL SET SHOULD BE 1 INORDER TO COMPARE WITH SET A AND B
   US[i]=1;
 }
//PRINTING UNIVERSAL SET
printf("The universal set is:\n");
for(i=0;i<N;i++)
 {
   printf("%d",U[i]);
 }
//PRINTING BITSTRING FOR UNIVERSAL SET
printf("\nThe bitstring representation of universal set is:\n");
for(i=0;i<N;i++)
 { 
   printf("%d",US[i]);
 }
//SET A 
for(i=0;i<N;i++)
 { 
   t=0;
   for(j=0;j<N;j++)
     {
       if(A[i]==U[j])
         {
           t=1;
           break;
         }
     }
   if(t==1)
     {
       SA[i]=1;
     }
   else
     {
       SA[i]=0;
     }
 }
printf("\nThe bitstring representation of set A is:\n");
for(i=0;i<N;i++)
 {
  printf("%d",SA[i]);
 }
//SET B 
for(i=0;i<N;i++)
 { 
   t=0;
   for(j=0;j<N;j++)
     {
       if(B[j]==U[i])
         {
           t=1;
           break;
         }
     }
   if(t==1)
     {
       SB[i]=1;
     }
   else
     {
       SB[i]=0;
     }
 }
printf("\nThe bitstring representation of set B is:\n");
for(i=0;i<N;i++)
 {
  printf("%d",SB[i]);
 }
//UNION
for(i=0;i<N;i++)
 {
  if(SA[i]==1 || SB[i]==1)
   {
    CS[i]=1;
   }
 else
   CS[i]=0;
 }
printf("\nUnion is:\n");
for(i=0;i<N;i++)
 {
  printf("%d",CS[i]);
 }
//INTERSECTION 
for(i=0;i<N;i++)
 {
  if(SA[i]==1 && SB[i]==1)
    {
   IS[i]=1;
    }
  else
   IS[i]=0;
 }
printf("\nIntersection is:\n");
for(i=0;i<N;i++)
 { 
  printf("%d",IS[i]);
 }
}
