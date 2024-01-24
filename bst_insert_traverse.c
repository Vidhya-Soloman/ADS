#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root,*temp;
//FUNCTION TO CREATE A NODE (MEMORY ALLOCATION)
struct node *addnode()
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data: ");
scanf("%d",&newnode->data);
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

//INSERTING A NODE
struct node *insert(struct node *root,struct node *newnode)
{
if(root==NULL)
return newnode;
if(newnode->data>root->data)
root->right=insert(root->right,newnode);
else
root->left=insert(root->left,newnode);
return root;
}
void intraversal(struct node *root)
{
if(root!=NULL)
{
intraversal(root->left);
printf("%d",root->data);
intraversal(root->right);
}
}
void posttraversal(struct node *root)
{
if(root!=NULL)
{
posttraversal(root->left);
posttraversal(root->right);
printf("%d",root->data);
}
}
void pretraversal(struct node *root)
{
if(root!=NULL)
{
printf("%d",root->data);
pretraversal(root->left);
pretraversal(root->right);
}
}


void main()
{
int ch;
while(1)
{
printf("\n1.Insert\n2.Inorder\n3.Postorder\n4.Preorder\n5.Exit\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:root=insert(root,addnode());
break;
case 2:intraversal(root);
break;
case 3:posttraversal(root);
break;
case 4:pretraversal(root);
break;
case 5:exit(0);
break;
default:printf("invalid");
break;
}
}
}


